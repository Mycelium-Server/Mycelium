#pragma once

#include <openssl/sha.h>

#include <string>

#include "network/byte_buffer.h"

class daft_hash {
 public:
  daft_hash();
  ~daft_hash();

  void update(const ByteBuffer &in);
  std::string finalise();

 private:
  SHA_CTX ctx_;
};
