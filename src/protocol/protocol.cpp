#include "protocol.h"

#include "serverbound_handshake.h"
#include "serverbound_client_information.h"

void protocol_registerPackets() {
    ServerboundHandshake().registerPacket();
    ServerboundClientInformation().registerPacket();
}