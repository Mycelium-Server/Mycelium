#pragma once

#include "../connection_context.h"
#include "../protocol/serverbound_login_start.h"

class LoginPacketListener {
public:
    LoginPacketListener();
    ~LoginPacketListener();

public:
    void handleLoginStart(ConnectionContext*, ServerboundLoginStart*);

};