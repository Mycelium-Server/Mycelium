#ifndef MYCELIUM_PACKETOUTPLUGINMESSAGE_H
#define MYCELIUM_PACKETOUTPLUGINMESSAGE_H

#include "AbstractPacket.h"

class PacketOutPluginMessage : public PacketOut {
public:
    PacketOutPluginMessage() = default;

public:
    void encode(ByteBuffer &buf) override {
        buf.writeString(channel);
        buf.writeByteBuffer(data);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x18;
    }

public:
    std::string channel;
    ByteBuffer data;

};

enum CHANNEL {
    RESERVED_REGISTER = 0,
    RESERVED_UNREGISTER = 1,
    INTERNAL_BRAND = 2,
    INTERNAL_DEBUG_PATHS = 3,
    INTERNAL_DEBUG_NEIGHBORS_UPDATE = 4,
    INTERNAL_DEBUG_CAVES = 5,
    INTERNAL_DEBUG_STRUCTURES = 6,
    INTERNAL_DEBUG_WORLDGEN_ATTEMPT = 7,
    INTERNAL_DEBUG_POI_TICKET_COUNT = 8,
    INTERNAL_DEBUG_POI_ADDED = 9,
    INTERNAL_DEBUG_POI_REMOVED = 10,
    INTERNAL_DEBUG_VILLAGE_SECTIONS = 11,
    INTERNAL_DEBUG_GOAL_SELECTOR = 12,
    INTERNAL_DEBUG_BRAIN = 13,
    INTERNAL_DEBUG_BEE = 14,
    INTERNAL_DEBUG_HIVE = 15,
    INTERNAL_DEBUG_GAME_TEST_ADD_MARKER = 16,
    INTERNAL_DEBUG_GAME_TEST_CLEAR = 17,
    INTERNAL_DEBUG_RAIDS = 18,
    INTERNAL_DEBUG_GAME_EVENT = 19,
    INTERNAL_DEBUG_GAME_EVENT_LISTENERS = 20
};

std::string get_channel(CHANNEL channel) {
    switch(channel) {
        case RESERVED_REGISTER: return "minecraft:register";
        case RESERVED_UNREGISTER: return "minecraft:unregister";
        case INTERNAL_BRAND: return "minecraft:brand";
        case INTERNAL_DEBUG_PATHS: return "minecraft:debug/paths";
        case INTERNAL_DEBUG_NEIGHBORS_UPDATE: return "minecraft:debug/neighbors_update";
        case INTERNAL_DEBUG_CAVES: return "minecraft:debug/caves";
        case INTERNAL_DEBUG_STRUCTURES: return "minecraft:debug/structures";
        case INTERNAL_DEBUG_WORLDGEN_ATTEMPT: return "minecraft:debug/worldgen_attempt";
        case INTERNAL_DEBUG_POI_TICKET_COUNT: return "minecraft:debug/poi_ticket_count";
        case INTERNAL_DEBUG_POI_ADDED: return "minecraft:debug/poi_ticket_added";
        case INTERNAL_DEBUG_POI_REMOVED: return "minecraft:debug/poi_ticket_removed";
        case INTERNAL_DEBUG_VILLAGE_SECTIONS: return "minecraft:debug/village_sections";
        case INTERNAL_DEBUG_GOAL_SELECTOR: return "minecraft:debug/goal_sections";
        case INTERNAL_DEBUG_BRAIN: return "minecraft:debug/brain";
        case INTERNAL_DEBUG_BEE: return "minecraft:debug/bee";
        case INTERNAL_DEBUG_HIVE: return "minecraft:debug/hive";
        case INTERNAL_DEBUG_GAME_TEST_ADD_MARKER: return "minecraft:debug/game_test_add_marker";
        case INTERNAL_DEBUG_GAME_TEST_CLEAR: return "minecraft:debug/game_test_clear";
        case INTERNAL_DEBUG_RAIDS: return "minecraft:debug/raids";
        case INTERNAL_DEBUG_GAME_EVENT: return "minecraft:debug/game_event";
        case INTERNAL_DEBUG_GAME_EVENT_LISTENERS: return "minecraft:debug/game_event_listeners";
        default: return "";
    }
}

#endif //MYCELIUM_PACKETOUTPLUGINMESSAGE_H
