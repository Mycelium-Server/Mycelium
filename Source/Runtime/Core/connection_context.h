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
  int64_t lastKeepalive = 0;

 public:
  bool active = false;
};