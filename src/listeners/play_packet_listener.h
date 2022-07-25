#pragma once

#include "../connection_context.h"
#include "../protocol/serverbound_client_information.h"
#include "../protocol/serverbound_plugin_message.h"
#include "../protocol/serverbound_confirm_teleportation.h"

class PlayPacketListener {
public:
    PlayPacketListener();
    ~PlayPacketListener();

public:
    void setTeleportID(int);

public:
    void handleClientInformation(ConnectionContext*, ServerboundClientInformation*);
    void handlePluginMessage(ConnectionContext*, ServerboundPluginMessage*);
    void handleConfirmTeleport(ConnectionContext*, ServerboundConfirmTeleportation*);
    // TODO: 0x13, 0x14, 0x15, 0x16 packets

private:
    int teleportID = 0;

};