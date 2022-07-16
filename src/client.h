#pragma once

#include "connection_context.h"
#include <uv.h>

typedef void(*tcp_connect_callback)(uv_stream_t*);

void tcp_set_pipeline(Pipeline* p);
void tcp_connect(const char* host, int port);
uv_loop_t* tcp_get_uv_loop();