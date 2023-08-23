#include "daft_hash.h"

#include <openssl/bn.h>
#include <algorithm>
#include <array>
#include <string_view>

daft_hash::daft_hash() : ctx_ {} {
  SHA1_Init(&ctx_);
}

daft_hash::~daft_hash() = default;

std::string daft_hash::finalise() {
  auto result = std::string();

  auto buf = std::array<std::uint8_t, 20>();
  SHA1_Final(buf.data(), &ctx_);

  BIGNUM* bn = BN_bin2bn(buf.data(), buf.size(), nullptr);

  SHA1_Init(&ctx_);

  if (BN_is_bit_set(bn, 159)) {
    result += '-';

    auto tmp = std::vector<uint8_t>(BN_num_bytes(bn));
    BN_bn2bin(bn, tmp.data());

    std::transform(tmp.begin(), tmp.end(), tmp.begin(),
                   [](uint8_t b) {
                     return ~b;
                   });

    BN_bin2bn(tmp.data(), tmp.size(), bn);
    BN_add_word(bn, 1);
  }

  auto hex = BN_bn2hex(bn);

  auto view = std::string_view(hex);
  while (view.size() && view[0] == '0') {
    view = view.substr(1);
  }

  result.append(view.begin(), view.end());
  OPENSSL_free(hex);
  BN_free(bn);

  std::transform(result.begin(), result.end(), result.begin(),
                 [](uint8_t c) {
                   return std::tolower(c);
                 });

  return result;
}

void daft_hash::update(const ByteBuffer& in) {
  SHA1_Update(&ctx_, in.data.data(), in.data.size());
}