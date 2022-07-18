#include "protocol.h"

#include "serverbound_handshake.h"
#include "serverbound_client_information.h"
#include "serverbound_plugin_message.h"

void protocol_registerPackets() {
    ServerboundHandshake().registerPacket();
    ServerboundClientInformation().registerPacket();
    ServerboundPluginMessage().registerPacket();
}