#ifndef MYCELIUM_PACKETINCLICKWINDOW_H
#define MYCELIUM_PACKETINCLICKWINDOW_H

#include "AbstractPacket.h"
#include "../Slot.h"

class PacketInClickWindow : public PacketIn {
public:
    void read(ByteBuffer &buf) override {
        window_id = buf.readByte();
        state_id = buf.readVarInt();
        slot = buf.readShort();
        button = buf.readByte();
        mode = buf.readVarInt();
        int length = buf.readVarInt();
        slots.resize(length);
        for(int i = 0; i < length; i++) {
            slot_t s;
            s.slot_number = buf.readShort();
            s.slot_data.read(buf);
            slots[i] = s;
        }
        carried_item.read(buf);
    }

    [[nodiscard]] int getPacketID() const override {
        return 0x08;
    }

public:
    byte_t window_id;
    int state_id;
    short slot;
    byte_t button;
    int mode;
    struct slot_t { short slot_number = -1; Slot slot_data; };
    std::vector<slot_t> slots;
    Slot carried_item;

};

#endif //MYCELIUM_PACKETINCLICKWINDOW_H
