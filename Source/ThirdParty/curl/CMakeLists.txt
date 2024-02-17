#

option(BUILD_CURL_EXE "" OFF)
option(ENABLE_CURL_MANUAL "" OFF)
option(BUILD_LIBCURL_DOCS "" OFF)
option(BUILD_SHARED_LIBS "" OFF)
option(CURL_STATIC_CRT "" OFF) # /MT
option(CURL_ENABLE_SSL "" OFF)

add_subdirectory(curl)
