#pragma once

#include "../connection_context.h"
#include "../protocol/serverbound_client_information.h"
#include "../protocol/serverbound_plugin_message.h"
#include "../protocol/serverbound_confirm_teleportation.h"
#include "../protocol/serverbound_set_player_position.h"
#include "../protocol/serverbound_set_player_position_rotation.h"
#include "../server/world/world.h"

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
    void handleSetPlayerPosition(ConnectionContext*, ServerboundSetPlayerPosition*);
    void handleSetPlayerPositionRotation(ConnectionContext*, ServerboundSetPlayerPositionRotation*);
    // TODO: 0x15, 0x16 packets

private:
    void handlePlayerPosition(ConnectionContext*, const Position3d&);

private:
    int teleportID = 0;
    ChunkLocation chunkLocation {};

};