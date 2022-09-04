/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <mutex>
#include <thread>

#include "event_loop.h"
#include "mojangapi/auth_request.h"
#include "pipeline.h"
#include "server/client_settings.h"
#include "server/entity/entity.h"
#include "server/entity/player.h"
#include "server/game_server.h"
#include "server/player_data.h"

enum ConnectionState {
  NONE = 0,
  STATUS = 1,
  LOGIN = 2,
  PLAY = 3
};

class ConnectionTCP;

class ConnectionContext {
 public:
  ConnectionContext(Pipeline*, ConnectionTCP*);
  ~ConnectionContext();

  void write(void*);
  void read(ByteBuffer*);
  [[nodiscard]] bool isActive() const;

 private:
  void read(void*, int);

 public:
  Pipeline* pipeline;
  ConnectionTCP* connection;
  EventLoop* eventLoop;
  ConnectionState state = ConnectionState::NONE;
  int protocolVersion = 0;
  void* packetListener = nullptr;
  GameServer* gameServer = nullptr;
  PlayerData playerData;
  EntityPlayer* playerEntity = nullptr;
  ClientSettings clientSettings;
  std::string clientBrand;
  std::thread keepaliveThread;
  long long lastKeepalive = 0;

 public:
  bool active = false;
};