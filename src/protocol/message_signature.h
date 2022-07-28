#pragma once

#include "../ByteBuffer.h"

struct MessageSignature {
    long long timestamp = 0;
    long long salt = 0;
    ByteBuffer signature;
};