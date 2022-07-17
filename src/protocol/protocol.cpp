#include "protocol.h"

#include "serverbound_handshake.h"

void protocol_registerPackets() {
    ServerboundHandshake().registerPacket();
}