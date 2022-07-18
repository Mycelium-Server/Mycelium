#include "handlers.h"
#include "../protocol/packet.h"
#include <iostream>

#include "../listeners/status_packet_listener.h"
#include "../listeners/login_packet_listener.h"
#include "../listeners/play_packet_listener.h"

#include "../protocol/serverbound_handshake.h"
#include "../protocol/serverbound_status_request.h"
#include "../protocol/serverbound_login_start.h"
#include "../protocol/serverbound_client_information.h"
#include "../protocol/serverbound_plugin_message.h"

PacketHandler::PacketHandler() {

}

PacketHandler::~PacketHandler() {

}

void PacketHandler::handle(ConnectionContext* ctx, void* in) {
    ServerboundPacket* packet = (ServerboundPacket*) in;

    switch (packet->getPacketID())
    {
    case 0x00: {
        if (ctx->state == ConnectionState::NONE) {
            ServerboundHandshake* handshake = (ServerboundHandshake*) packet;
            ctx->protocolVersion = handshake->protocolVersion;
            if (handshake->nextState == ServerboundHandshake::STATUS) {
                ctx->packetListener = new StatusPacketListener();
                ctx->state = ConnectionState::STATUS;
            } else if (handshake->nextState == ServerboundHandshake::LOGIN) {
                ctx->packetListener = new LoginPacketListener();
                ctx->state = ConnectionState::LOGIN;
            }
            delete handshake;
        } else if (ctx->state == ConnectionState::STATUS) {
            ServerboundStatusRequest* statusRequest = (ServerboundStatusRequest*) packet;
            ((StatusPacketListener*) ctx->packetListener)->handleStatusRequest(ctx, statusRequest);
            delete statusRequest;
        } else if (ctx->state == ConnectionState::LOGIN) {
            ServerboundLoginStart* loginStart = (ServerboundLoginStart*) packet;
            ((LoginPacketListener*) ctx->packetListener)->handleLoginStart(ctx, loginStart);
            delete loginStart;
        }
        break;
    }
    
    case 0x01: {
        if (ctx->state == ConnectionState::STATUS) {
            ServerboundPingRequest* request = (ServerboundPingRequest*) packet;
            ((StatusPacketListener*) ctx->packetListener)->handlePingRequest(ctx, request);
            delete request;
        } else if (ctx->state == ConnectionState::LOGIN) {
            ServerboundEncryptionResponse* response = (ServerboundEncryptionResponse*) packet;
            ((LoginPacketListener*) ctx->packetListener)->handleEncryptionResponse(ctx, response);
            delete response;
        }
        break;
    }

    case 0x07: {
        if (ctx->state == ConnectionState::PLAY) {
            ServerboundClientInformation* information = (ServerboundClientInformation*) packet;
            ((PlayPacketListener*) ctx->packetListener)->handleClientInformation(ctx, information);
            delete information;
        }
        break;
    }

    case 0x0C: {
        if (ctx->state == ConnectionState::PLAY) {
            ServerboundPluginMessage* message = (ServerboundPluginMessage*) packet;
            ((PlayPacketListener*) ctx->packetListener)->handlePluginMessage(ctx, message);
            delete message;
        }
        break;
    }

    default:
        std::cout << "Unknown packet ID " << std::hex << packet->getPacketID() << std::dec << std::endl;
        break;
    }

}

bool PacketHandler::onConnect(ConnectionContext*) {
    return true;
}

bool PacketHandler::onDisconnect(ConnectionContext*) {
    return true;
}