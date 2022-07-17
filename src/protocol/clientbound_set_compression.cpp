#include "clientbound_set_compression.h"

ClientboundSetCompression::ClientboundSetCompression() {

}

ClientboundSetCompression::~ClientboundSetCompression() {

}

void ClientboundSetCompression::write(ByteBuffer& out) {
    out.writeVarInt(threshold);
}

int ClientboundSetCompression::getPacketID() const {
    return 0x03;
}