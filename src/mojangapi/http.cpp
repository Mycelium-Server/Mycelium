/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "http.h"

#include <curl/curl.h>

#include <iomanip>
#include <iostream>
#include <sstream>

static size_t write_fn(void* ptr, size_t size, size_t nmemb, void* data) {
  ((std::string*) data)->append((char*) ptr, size * nmemb);
  return size * nmemb;
}

std::string toURL(std::string s) {
  static const char* allowed = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-._~!$&'()*+,;=:@/?";
  std::string::size_type idx = s.find_first_not_of(allowed);
  while (idx != std::string::npos) {
    std::ostringstream oss;
    oss << '%' << std::hex << std::setw(2) << std::setfill('0') << std::uppercase << (int) s[idx];
    std::string encoded = oss.str();
    s.replace(idx, 1, encoded);
    idx = s.find_first_not_of(allowed, idx + encoded.length());
  }
  return s;
}

void http_init() {
}

ResponseHTTP http_get(const std::string& url) {
  curl_global_init(CURL_GLOBAL_ALL);
  CURL* m_curl = curl_easy_init();

  curl_easy_setopt(m_curl, CURLOPT_URL, url.c_str());
  curl_easy_setopt(m_curl, CURLOPT_HTTP_VERSION, CURL_HTTP_VERSION_1_0);
  curl_easy_setopt(m_curl, CURLOPT_HTTPGET, 1L);
  curl_easy_setopt(m_curl, CURLOPT_FORBID_REUSE, 1L);
  curl_easy_setopt(m_curl, CURLOPT_CAINFO, "cert.pem");
  curl_easy_setopt(m_curl, CURLOPT_USERAGENT, "Mycelium");
  curl_easy_setopt(m_curl, CURLOPT_SSL_VERIFYPEER, 0L);

  std::string response;
  curl_easy_setopt(m_curl, CURLOPT_WRITEFUNCTION, write_fn);
  curl_easy_setopt(m_curl, CURLOPT_WRITEDATA, &response);
  curl_easy_setopt(m_curl, CURLOPT_VERBOSE, 1L);

  int code = 0;
  curl_easy_perform(m_curl);
  curl_easy_getinfo(m_curl, CURLINFO_RESPONSE_CODE, &code);

  ResponseHTTP dst;
  dst.response_code = code;
  dst.response = response;

  for (int i = 0; i < 100000;) {
    i++;
  }

  curl_easy_cleanup(m_curl);
  curl_global_cleanup();
  return {};
}