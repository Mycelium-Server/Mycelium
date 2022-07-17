#pragma once

#include "pipeline.h"
#include "server/game_server.h"
#include <uv.h>

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

    void write(void*, bool async = false);
    void read(ByteBuffer*);

private:
    void read(void*, int);

public:
    Pipeline* pipeline;
    uv_stream_t* stream;
    ConnectionState state = ConnectionState::NONE;
    int protocolVersion = 0;
    void* packetListener = 0;
    GameServer* gameServer = 0;

};