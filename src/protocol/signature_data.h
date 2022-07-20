#pragma once

#include "../ByteBuffer.h"

struct SigData {
    long long timestamp = 0;
    ByteBuffer publicKey;
    ByteBuffer signature;
};