#pragma once

#include "http.h"
#include "../json.hpp"
#include "../connection_context.h"

class EntityPlayer;

namespace MojangAPI {

    struct AuthResponse {
        std::string raw;
        bool success = false;

        nlohmann::json json;

        // TODO: Fields
    };

    AuthResponse requestAuth(ConnectionContext*);

}