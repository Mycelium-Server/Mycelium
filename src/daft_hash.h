//
// Copyright (c) 2020 Richard Hodges (hodges.r@gmail.com)
//
// Official repository: https://github.com/AlexAndDad/gateway
//
#pragma once

#include "byte_buffer.h"
//#include "minecraft/net.hpp"
#include <openssl/sha.h>

#include <string>

//namespace minecraft::protocol
//{

// TODO: Refactor

struct daft_hash_impl {
  daft_hash_impl()
      : ctx_ {} {
    SHA1_Init(&ctx_);
  }

  daft_hash_impl(daft_hash_impl const &) = delete;
  daft_hash_impl(daft_hash_impl &&) = delete;
  daft_hash_impl &operator=(daft_hash_impl const &) = delete;
  daft_hash_impl &operator=(daft_hash_impl &&) = delete;
  ~daft_hash_impl() {}

  void update(/* net::const_buffer */ const ByteBuffer &in) { SHA1_Update(&ctx_, in.data.data(), in.data.size()); }

  std::string finalise();

 private:
  SHA_CTX ctx_;
};

//}
