#pragma once

#include "../byte_buffer.h"

struct MessageSignature {
  int64_t timestamp = 0;
  int64_t salt = 0;
  ByteBuffer signature;
};