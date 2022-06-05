#ifndef MYCELIUM_HTTP_H
#define MYCELIUM_HTTP_H

#include <curl/curl.h>
#include <string>
#include <sstream>
#include <iomanip>

static CURL* curl;

std::string url_fix_symbols(std::string s)
{
    static const char* allowed = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-._~!$&'()*+,;=:@/?";
    std::string::size_type idx = s.find_first_not_of(allowed);
    while (idx != std::string::npos)
    {
        std::ostringstream oss;
        oss << '%' << std::hex << std::setw(2) << std::setfill('0') << std::uppercase << (int)s[idx];
        std::string encoded = oss.str();
        s.replace(idx, 1, encoded);
        idx = s.find_first_not_of(allowed, idx+encoded.length());
    }
    return s;
}

size_t _write_fnc(void* ptr, size_t size, size_t nmemb, std::string* data) {
    data->append((char*)ptr, size * nmemb);
    return size * nmemb;
}

void initialize_global_curl() {
    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();
}

std::string send_get_http_request(const std::string& url, int* http_code) {

    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_HTTP_VERSION, CURL_HTTP_VERSION_1_0);
    curl_easy_setopt(curl, CURLOPT_HTTPGET, 1L);
    curl_easy_setopt(curl, CURLOPT_FORBID_REUSE, 1L);
    curl_easy_setopt(curl, CURLOPT_CAINFO, "cert.pem");
    curl_easy_setopt(curl, CURLOPT_USERAGENT, "Mycelium");
    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);

    std::string response_string;
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, _write_fnc);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response_string);
    curl_easy_setopt(curl, CURLOPT_VERBOSE, 0L);

    curl_easy_perform(curl);
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, http_code);
    return response_string;
}

#endif //MYCELIUM_HTTP_H
