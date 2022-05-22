#ifndef MYCELIUM_PACKETOUTPLAYERINFO_H
#define MYCELIUM_PACKETOUTPLAYERINFO_H

#include <memory>
#include "AbstractPacket.h"

class PacketOutPlayerInfo : public PacketOut {
public:
    PacketOutPlayerInfo() = default;

public:
    class Action {
    public:
        virtual void encode(ByteBuffer& buf) = 0;
    };

    class AddPlayer : public Action {
    public:
        AddPlayer() = default;

        void encode(ByteBuffer &buf) override {
            buf.writeString(name);
            buf.writeVarInt(propeperty.size());
            for(Property prop : propeperty) {
                buf.writeString(prop.name);
                buf.writeString(prop.value);
                buf.writeBoolean(prop.is_signed);
                if(prop.is_signed)
                    buf.writeString(prop.signature);
            }
            buf.writeVarInt(gamemode);
            buf.writeVarInt(ping);
            buf.writeBoolean(has_display_name);
            if(has_display_name)
                buf.writeString(display_name);
        }

    public:
        struct Property {
            std::string name;
            std::string value;
            bool is_signed;
            std::string signature;
        };

    public:
        std::string name;
        std::vector<Property> propeperty;
        int gamemode;
        int ping;
        bool has_display_name;
        std::string display_name;

    };

    class UpdateGamemode : public Action {
    public:
        UpdateGamemode() = default;

        void encode(ByteBuffer &buf) override {
            buf.writeVarInt(gamemode);
        }

    public:
        int gamemode;
    };

    class UpdateLatency : public Action {
    public:
        UpdateLatency() = default;

        void encode(ByteBuffer &buf) override {
            buf.writeVarInt(ping);
        }

    public:
        int ping;
    };

    class UpdateDisplayName : public Action {
    public:
        UpdateDisplayName() = default;

        void encode(ByteBuffer &buf) override {
            buf.writeBoolean(has_display_name);
            if(has_display_name)
                buf.writeString(display_name);
        }

    public:
        bool has_display_name;
        std::string display_name;
    };

    class RemovePlayer : public Action {
    public:
        RemovePlayer() = default;
        void encode(ByteBuffer &buf) override {}
    };

    enum ACTION_TYPE {
        ACTION_ADD_PLAYER = 0,
        ACTION_UPDATE_GAMEMODE = 1,
        ACTION_UPDATE_LATENCY = 2,
        ACTION_UPDATE_DISPLAY_NAME = 3,
        ACTION_REMOVE_PLAYER = 4
    };

    class PlayerAction {
    public:
        PlayerAction() = default;

        void encode(ByteBuffer& buf) {
            buf.writeUUID(uuid);
            action->encode(buf);
        }

    public:
        UUID_t uuid;
        std::shared_ptr<Action> action;
    };

public:
    void encode(ByteBuffer &buf) override {
        buf.writeVarInt(action);
        buf.writeVarInt(player.size());
        for(PlayerAction action : player)
            action.encode(buf);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x36;
    }

public:
    ACTION_TYPE action;
    std::vector<PlayerAction> player;

};

#endif //MYCELIUM_PACKETOUTPLAYERINFO_H
