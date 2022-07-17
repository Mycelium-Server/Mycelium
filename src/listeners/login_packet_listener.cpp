#include "login_packet_listener.h"

LoginPacketListener::LoginPacketListener() {

}

LoginPacketListener::~LoginPacketListener() {

}

void LoginPacketListener::handleLoginStart(ConnectionContext* ctx, ServerboundLoginStart* packet) {
    std::cout << "Login start " << packet->name << std::endl;
}