#ifndef MYCELIUM_KEEPALIVE_H
#define MYCELIUM_KEEPALIVE_H

#include <thread>
#include <chrono>
#include <map>
#include <memory>
#include "Server.h"
#include "server/Server.h"
#include "packet/AbstractPacket.h"
#include "packet/PacketOutKeepalive.h"
#include "packet/PacketInKeepalive.h"
#include "packet/PacketOutPlayerInfo.h"

using namespace std::chrono_literals;

void sendPacket(uv_stream_t*, const std::shared_ptr<PacketOut>&);

std::vector<uv_stream_t*> to_keepalive;
std::map<uv_stream_t*, long long> last_keepalive;

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
            long long millis = tv.tv_sec * 1000 + tv.tv_usec / 1000;
            keepalive.keep_alive_id = (long)millis;
            sendPacket(handle, std::make_shared<PacketOutKeepalive>(keepalive));
        }
    }
}

void handle_keepalive_response(uv_stream_t* handle, const PacketInKeepalive& keepalive) {
    if(std::find(to_keepalive.begin(), to_keepalive.end(), handle) != to_keepalive.end()) {
        uv_timeval64_t tv;
        uv_gettimeofday(&tv);
        long long millis = tv.tv_sec * 1000 + tv.tv_usec / 1000;
        long long ping = millis - keepalive.keep_alive_id;

        PacketOutPlayerInfo player_info_add_player;
        player_info_add_player.action = PacketOutPlayerInfo::ACTION_UPDATE_LATENCY;
        PacketOutPlayerInfo::UpdateLatency update_latency;
        update_latency.ping = (int)ping;
        PacketOutPlayerInfo::PlayerAction player_update_latency;
        player_update_latency.uuid = con_to_player[handle]->uuid;
        player_update_latency.action = std::make_shared<PacketOutPlayerInfo::UpdateLatency>(update_latency);
        player_info_add_player.player.push_back(player_update_latency);
        for(auto& p : players) {
            sendPacket(p->connection, std::make_shared<PacketOutPlayerInfo>(player_info_add_player));
        }
    }
}

#endif //MYCELIUM_KEEPALIVE_H
