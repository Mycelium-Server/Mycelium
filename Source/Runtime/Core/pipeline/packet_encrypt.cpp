

#include "handlers.h"

PacketEncrypt::PacketEncrypt(const CipherAES& cipher)
    : cipher(cipher) {}

PacketEncrypt::~PacketEncrypt() = default;

bool PacketEncrypt::encode(ConnectionContext* ctx, void* in, void*& out) {
  auto* inbuf = (ByteBuffer*) in;
  out = aes_encrypt(cipher, inbuf);
  delete inbuf;
  return true;
}