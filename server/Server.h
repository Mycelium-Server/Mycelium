#ifndef MYCELIUM_SERVER_SERVER_H
#define MYCELIUM_SERVER_SERVER_H

#include <string>
#include <map>
#include <vector>
#include <uv.h>
#include "../JSON.h"
#include "../Gamemode.h"
#include "../EntityMetadata.h"
#include "../Chunk.h"
#include "../Encryption.h"
#include "../HTTP.h"
#include "../packet/PacketOutChunk.h"
#include "../HexDigest.h"

void sendPacket(uv_stream_t*, const std::shared_ptr<PacketOut>&);

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
    JSON profile;

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

class World {
public:
    World() = default;
    World(int radius_x, int radius_z) : start_x(-radius_x), start_z(-radius_z), end_x(radius_x), end_z(radius_z) {
        chunks.resize((end_x-start_x+1) * (end_z-start_z+1));
        for(int x = start_x; x <= end_x; x++) {
            for(int z = start_z; z <= end_z; z++) {
                chunks[chunk_index(x, z)].chunk_x = x;
                chunks[chunk_index(x, z)].chunk_z = z;
            }
        }
    }

    int chunk_index(int x, int z) {
        return (x-start_x)*(end_z-start_z+1)+(z-start_z);
    }

    void cache_packets() {
        if(cached_packets.size() != chunks.size())
            cached_packets.resize(chunks.size());
        for(int i = 0; i < cached_packets.size(); i++) {
            PacketOutChunk chunk_packet;
            chunk_packet.chunk = chunks[i];
            chunk_packet.cache_data();
            cached_packets[i] = std::make_shared<PacketOutChunk>(chunk_packet);
        }
    }

    void send_to_player(const std::shared_ptr<Player>& player) {
        send(player->connection);
    }

    void send(uv_stream_t* con) {
        for(auto& packet : cached_packets) sendPacket(con, packet);
    }

    int set_block(int x, int y, int z, Block block) {
        int chunk_x = (int)floor(double(x)/16.0);
        int chunk_z = (int)floor(double(z)/16.0);
        int idx = chunk_index(chunk_x, chunk_z);
        chunks[idx].set_block(x & 15, y+64, z & 15, block);
        return idx;
    }

    void update_packet(int idx) {
        PacketOutChunk chunk_packet;
        chunk_packet.chunk = chunks[idx];
        chunk_packet.cache_data();
        cached_packets[idx] = std::make_shared<PacketOutChunk>(chunk_packet);
    }

public:
    int start_x, start_z, end_x, end_z;
    std::vector<Chunk> chunks;
    std::vector<std::shared_ptr<PacketOut>> cached_packets;

};

std::shared_ptr<World> overworld;
RSAKeyPairDER keypair;

static std::string hex_str_(int i) {
    std::stringstream ss;
    ss << std::hex << i;
    return ss.str();
}

std::string server_id_hash(const ByteBuffer& shared_secret) {
    DaftHash digest;
    digest.update(shared_secret);
    digest.update(keypair.key_public_der);
    return digest.finalise();
}

void generate_rsa() {
    printf("Generating RSA keypair... ");
    keypair = generate_encryption_request_key_pair();
    printf("Done.\n");
}

void prepare_spawn() {
    printf("Preparing spawn... ");
    overworld = std::make_shared<World>(3, 3);
    Block stone(true, false, true, block_minecraft_bedrock);
    for(int x = -3*16; x < 4*16; ++x) {
        for(int z = -3*16; z < 4*16; ++z) {
            for(int y = -64; y < 320; ++y) {
                overworld->set_block(x, y, z, stone);
            }
        }
    }
    printf("Caching chunk packets... ");
    overworld->cache_packets();
    printf("Done.\n");
}

void initialize_curl() {
    printf("Initializing CURL... ");
    initialize_global_curl();
    if(!curl) {
        printf("ERROR\n");
        exit(-1);
    }
    printf("Done.\n");
}

void initialize_server() {
    initialize_curl();
    generate_rsa();
    prepare_spawn();
}

#endif //MYCELIUM_SERVER_SERVER_H
