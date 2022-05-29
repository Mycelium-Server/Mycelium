#ifndef MYCELIUM_SLOT_H
#define MYCELIUM_SLOT_H

#include "ByteBuffer.h"
#include "NBT.h"

class Slot {
public:
    void encode(ByteBuffer& buf) {
        buf.writeBoolean(present);
        if(present) {
            buf.writeVarInt(item_id);
            buf.writeByte(item_count);
            ByteBuffer tmp = nbt->asByteBuffer();
            buf.writeByteBuffer(tmp);
        }
    }

    void read(ByteBuffer& buf) {
        present = buf.readBoolean();
        if(present) {
            item_id = buf.readVarInt();
            item_count = buf.readByte();
            nbt = read_nbt(buf);
        }
    }

public:
    bool present = false;
    int item_id = 0;
    byte_t item_count = 0;
    std::shared_ptr<NBT_Component> nbt = std::make_shared<TAG_Compound>(NBT_Components{});

};

#endif //MYCELIUM_SLOT_H
