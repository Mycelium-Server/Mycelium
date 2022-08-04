#pragma once

#include <uv.h>

#include <mutex>
#include <thread>

#include "event_loop.h"
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

class ConnectionContext {
 public:
  ConnectionContext(Pipeline*, uv_stream_t*);
  ~ConnectionContext();

  void createAsync();
  void write(void*, bool isAsync = false);
  void read(ByteBuffer*);
  [[nodiscard]] bool isActive() const;

 private:
  void read(void*, int);

 public:
  Pipeline* pipeline;
  uv_stream_t* stream;
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

 private:
  uv_async_t* async = nullptr;
  std::mutex async_mutex;
};