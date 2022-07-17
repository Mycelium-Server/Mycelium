#include "clientbound_status_response.h"
#include "../server/game_server.h"
#include <iostream>

ClientboundStatusResponse::ClientboundStatusResponse() {

}

ClientboundStatusResponse::~ClientboundStatusResponse() {

}

void ClientboundStatusResponse::write(ByteBuffer& out) {
    out.writeString(response);
}

int ClientboundStatusResponse::getPacketID() const {
    return 0x00;
}

void ClientboundStatusResponse::construct(GameServer* server) {
    response = "{\"version\": {\"name\": \"1.19\",\"protocol\": 759 },\"players\": {\"max\": " + 
            std::to_string(server->getMaxPlayers()) + ",\"online\": " + std::to_string(server->getOnline()) + 
            "}, \"description\": {\"text\": \"" + server->getMOTD() + "\" }, \"favicon\": \"\",\"previewChat\": false}";
}