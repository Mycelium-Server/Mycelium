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
            ByteBuffer tmp = nbt.asByteBuffer();
            buf.writeByteBuffer(tmp);
        }
    }

public:
    bool present;
    int item_id;
    byte_t item_count;
    TAG_Compound nbt;

};

#endif //MYCELIUM_SLOT_H
