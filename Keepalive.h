#ifndef MYCELIUM_KEEPALIVE_H
#define MYCELIUM_KEEPALIVE_H

#include <thread>
#include <chrono>
#include <map>
#include <memory>
#include "Server.h"
#include "packet/AbstractPacket.h"
#include "packet/PacketOutKeepalive.h"
#include "packet/PacketInKeepalive.h"

using namespace std::chrono_literals;

void sendPacket(uv_stream_t*, const std::shared_ptr<PacketOut>&);

std::vector<uv_stream_t*> to_keepalive;
std::map<uv_stream_t*, long> last_keepalive;

void add_keepalive_target(uv_stream_t* handle) {
    to_keepalive.push_back(handle);
    last_keepalive[handle] = -100;
}

void process_keepalive(uv_stream_t* handle) {
    if (std::find(to_keepalive.begin(), to_keepalive.end(), handle) != to_keepalive.end()) {
        uv_timeval64_t tv;
        uv_gettimeofday(&tv);
        if(tv.tv_sec - last_keepalive[handle] > 15) {
            last_keepalive[handle] = tv.tv_sec;
            PacketOutKeepalive keepalive;
            keepalive.keep_alive_id = rand();
            sendPacket(handle, std::make_shared<PacketOutKeepalive>(keepalive));
        }
    }
}

#endif //MYCELIUM_KEEPALIVE_H
