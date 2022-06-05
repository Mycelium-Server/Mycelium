#ifndef MYCELIUM_MOJANGAPI_H
#define MYCELIUM_MOJANGAPI_H

#include "HTTP.h"
#include "JSON.h"

int mojang_request_authentication(JSON* json, const std::string& name, const std::string& server_id="", const std::string& ip="") {
    std::string request = "https://sessionserver.mojang.com/session/minecraft/hasJoined?username="+name;
    if(!server_id.empty()) request += "&serverId="+url_fix_symbols(server_id);
    if(!ip.empty()) request += "&ip="+url_fix_symbols(ip);
    int http_code;
    std::string response = send_get_http_request(request, &http_code);
    if(http_code == 200) *json = read_json(response);
    return http_code;
}

#endif //MYCELIUM_MOJANGAPI_H
