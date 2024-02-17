#pragma once

#include <string>

struct ResponseHTTP {
  int response_code = 0;
  std::string response {};
};

void http_init();
std::string toURL(std::string);
ResponseHTTP http_get(const std::string&);