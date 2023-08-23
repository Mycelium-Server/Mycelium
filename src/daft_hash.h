
#pragma once

#include "byte_buffer.h"
#include <openssl/sha.h>
#include <string>

class daft_hash {
 public:
  daft_hash();
  ~daft_hash();

  void update(const ByteBuffer &in);
  std::string finalise();

 private:
  SHA_CTX ctx_;
};
