#pragma once

#include <iostream>

#include "connection_context.h"
#include "pipeline.h"

typedef Pipeline* (*fn_init_pipeline)(ConnectionContext*);

void tcp_start_server(fn_init_pipeline, const char*, int);