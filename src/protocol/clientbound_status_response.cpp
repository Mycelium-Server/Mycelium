#include "clientbound_status_response.h"
#include <iostream>

ClientboundStatusResponse::ClientboundStatusResponse() = default;

ClientboundStatusResponse::~ClientboundStatusResponse() = default;

void ClientboundStatusResponse::write(ByteBuffer& out) {
    out.writeString(response);
}

int ClientboundStatusResponse::getPacketID() const {
    return 0x00;
}

void ClientboundStatusResponse::construct(GameServer* server) {
    response = R"({"version": {"name": "1.19.1","protocol": 760 },"players": {"max": )" +
            std::to_string(server->getMaxPlayers()) + ",\"online\": " + std::to_string(server->getOnline()) + 
            R"(}, "description": {"text": ")" + server->getMOTD() + R"(" },"previewChat": false})";
}