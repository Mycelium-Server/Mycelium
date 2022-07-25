#pragma once

#include "../ByteBuffer.h"

struct SigData { // TODO: Cryptography
    long long timestamp = 0;
    ByteBuffer publicKey;
    ByteBuffer signature;
};