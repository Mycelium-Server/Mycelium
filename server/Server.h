#ifndef MYCELIUM_SERVER_SERVER_H
#define MYCELIUM_SERVER_SERVER_H

#include <string>
#include <map>
#include <vector>
#include <uv.h>
#include "../ByteBuffer.h"
#include "../Gamemode.h"
#include "../EntityMetadata.h"

std::string get_brand() {
    return "Mycelium";
}

class Location {
public:
    Location(double x, double y, double z, float yaw, float pitch)
        : x(x), y(y), z(z), yaw(yaw), pitch(pitch) {}
    explicit Location() : Location(0,0,0,0,0) {}

    [[nodiscard]] byte_t yaw_as_angle() const {
        float tmp = yaw;
        while(tmp > 1) tmp -= 1;
        while(tmp < 0) tmp += 1;
        return (byte_t)std::round(tmp*256.f);
    }

    [[nodiscard]] byte_t pitch_as_angle() const {
        float tmp = pitch;
        while(tmp > 1) tmp -= 1;
        while(tmp < 0) tmp += 1;
        return (byte_t)std::round(tmp*256.f);
    }

    [[nodiscard]] Location_t c_location() const {
        return {(int)x, (short)y, (int)z};
    }

public:
    double x;
    double y;
    double z;
    float yaw;
    float pitch;

};

class Inventory {
public:
    Slot items[45];
};

class Player;

std::map<uv_stream_t*, std::shared_ptr<Player>> con_to_player;
std::vector<std::shared_ptr<Player>> players;

class Player {
public:
    std::string name;
    UUID_t uuid;
    uv_stream_t* connection;
    GAMEMODE gamemode;
    Location location;
    int entity_id;
    std::shared_ptr<EntityMetadata> metadata;
    Inventory inventory;

public:
    [[nodiscard]] double get_feet_y() const {
        return location.y;
    }

    [[nodiscard]] double get_head_y() const {
        return location.y+1.62;
    }

public:
    static std::shared_ptr<Player>& from_entity_id(int entity_id) {
        for(auto& p : players) {
            if(p->entity_id == entity_id) return p;
        }
    }

};

#endif //MYCELIUM_SERVER_SERVER_H
