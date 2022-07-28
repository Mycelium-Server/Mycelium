#pragma once

#include "../connection_context.h"
#include "../protocol/serverbound_client_information.h"
#include "../protocol/serverbound_plugin_message.h"
#include "../protocol/serverbound_confirm_teleportation.h"
#include "../protocol/serverbound_set_player_position.h"
#include "../protocol/serverbound_set_player_position_rotation.h"
#include "../server/world/world.h"
#include "../protocol/serverbound_set_player_rotation.h"

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
    void handleSetPlayerRotation(ConnectionContext*, ServerboundSetPlayerRotation*);
    // TODO: 0x17 packet

private:
    void handlePlayerPosition(ConnectionContext*, const Position3d&);
    void handlePlayerRotation(ConnectionContext*, float, float);

private:
    int teleportID = 0;
    ChunkLocation chunkLocation {};

};