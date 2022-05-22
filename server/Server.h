#ifndef MYCELIUM_SERVER_SERVER_H
#define MYCELIUM_SERVER_SERVER_H

#include <string>
#include <map>
#include "../ByteBuffer.h"
#include <uv.h>

class Player {
public:
    std::string name;
    UUID_t uuid;
};

std::map<uv_stream_t*, Player> con_to_player;

#endif //MYCELIUM_SERVER_SERVER_H
