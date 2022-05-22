#ifndef MYCELIUM_ABSTRACTPACKET_H
#define MYCELIUM_ABSTRACTPACKET_H

#include "../ByteBuffer.h"

class Packet {
public:
    [[nodiscard]] virtual int getPacketID() const = 0;
};

class PacketIn : public Packet {
public:
    PacketIn() = default;
    virtual void read(ByteBuffer& buf) = 0;
};

class PacketOut : public Packet {
public:
    PacketOut() = default;
    virtual void encode(ByteBuffer& buf) = 0;
};

#endif //MYCELIUM_ABSTRACTPACKET_H
