#include "protocol.h"

#include "serverbound_handshake.h"
#include "serverbound_client_information.h"
#include "serverbound_plugin_message.h"
#include "serverbound_keepalive.h"
#include "serverbound_set_player_position.h"
#include "serverbound_set_player_position_rotation.h"

void protocol_registerPackets() {
    ServerboundHandshake().registerPacket();
    ServerboundClientInformation().registerPacket();
    ServerboundPluginMessage().registerPacket();
    ServerboundKeepAlive().registerPacket();
    ServerboundSetPlayerPosition().registerPacket();
    ServerboundSetPlayerPositionRotation().registerPacket();
}