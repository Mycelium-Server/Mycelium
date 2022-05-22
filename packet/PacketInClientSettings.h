#ifndef MYCELIUM_PACKETINCLIENTSETTINGS_H
#define MYCELIUM_PACKETINCLIENTSETTINGS_H

#include "AbstractPacket.h"

class PacketInClientSettings : public PacketIn {
public:
    void read(ByteBuffer& buf) override {
        locale = buf.readString();
        view_distance = buf.readSignedByte();
        chat_mode = buf.readVarInt();
        chat_colors = buf.readBoolean();
        displayed_skin_parts.value = buf.readByte();
        main_hand = buf.readVarInt();
        enable_text_filtering = buf.readBoolean();
        allow_server_listings = buf.readBoolean();
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x05;
    }

public:
    std::string locale;
    signed char view_distance;
    int chat_mode;
    bool chat_colors;
    union {
        struct {
            unsigned char cape_enabled : 1;
            unsigned char jacket_enabled : 1;
            unsigned char left_sleeve_enabled : 1;
            unsigned char right_sleeve_enabled : 1;
            unsigned char left_pants_leg_enabled : 1;
            unsigned char right_pants_leg_enabled : 1;
            unsigned char hat_enabled : 1;
            unsigned char unused : 1;
        };
        unsigned char value;
    } displayed_skin_parts{};
    int main_hand;
    bool enable_text_filtering;
    bool allow_server_listings;

};

enum CHAT_MODE {
    CHAT_MODE_ENABLED = 0,
    CHAT_MODE_COMMANDS_ONLY = 1,
    CHAT_MODE_HIDDEN = 2,
    CHAT_MODE_UNDEFINED = -1
};

CHAT_MODE get_chat_mode(int chat_mode) {
    switch (chat_mode) {
        case 0: return CHAT_MODE_ENABLED;
        case 1: return CHAT_MODE_COMMANDS_ONLY;
        case 2: return CHAT_MODE_HIDDEN;
        default: return CHAT_MODE_UNDEFINED;
    }
}

enum MAIN_HAND {
    MAIN_HAND_LEFT = 0,
    MAIN_HAND_RIGHT = 1
};

MAIN_HAND get_main_hand(int main_hand) {
    if(main_hand == 0) return MAIN_HAND_LEFT;
    return MAIN_HAND_RIGHT;
}

#endif //MYCELIUM_PACKETINCLIENTSETTINGS_H
