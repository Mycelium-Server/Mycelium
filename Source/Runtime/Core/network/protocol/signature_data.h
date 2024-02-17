#pragma once

#include "../byte_buffer.h"

struct SigData {// TODO: Cryptography
  int64_t timestamp = 0;
  ByteBuffer publicKey;
  ByteBuffer signature;
};