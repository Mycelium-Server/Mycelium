#include "encryption.h"

#include <iostream>

KeyPairRSA rsa_create_keypair() {
  RSA* rsa;
  BIGNUM* bn;

  unsigned long e = RSA_F4;

  bn = BN_new();
  BN_set_word(bn, e);

  rsa = RSA_new();
  RSA_generate_key_ex(rsa, 1024, bn, nullptr);

  byte_t* derEncoded;
  int len = i2d_RSA_PUBKEY(rsa, reinterpret_cast<unsigned char**>(&derEncoded));
  if (len < 0) {
    std::cerr << "Unable to encode public key" << std::endl;
    return {};
  }

  KeyPairRSA keypair;
  keypair.rsa = rsa;
  keypair.publicKey.writeBytes(derEncoded, len);
  return keypair;
}

ByteBuffer rsa_decrypt(const KeyPairRSA& keypair, const ByteBuffer& buf) {
  auto* out = (byte_t*) malloc(buf.data.size());
  int len = RSA_private_decrypt((int) buf.data.size(),
                                reinterpret_cast<const unsigned char*>(buf.data.data()),
                                reinterpret_cast<unsigned char*>(out),
                                keypair.rsa,
                                RSA_PKCS1_PADDING);
  if (len < 0) {
    std::cerr << "Could not decrypt message" << std::endl;
    return {};
  }
  ByteBuffer dst(out, len);
  free(out);
  return dst;
}

CipherAES aes_create_cipher(const ByteBuffer& key) {
  CipherAES cipher;
  cipher.encryptCtx = EVP_CIPHER_CTX_new();
  EVP_CIPHER_CTX_init(cipher.encryptCtx);
  EVP_EncryptInit_ex(cipher.encryptCtx,
                     EVP_aes_128_cfb8(),
                     nullptr,
                     reinterpret_cast<const unsigned char*>(key.data.data()),
                     reinterpret_cast<const unsigned char*>(key.data.data()));
  cipher.decryptCtx = EVP_CIPHER_CTX_new();
  EVP_CIPHER_CTX_init(cipher.decryptCtx);
  EVP_DecryptInit_ex(cipher.decryptCtx,
                     EVP_aes_128_cfb8(),
                     nullptr,
                     reinterpret_cast<const unsigned char*>(key.data.data()),
                     reinterpret_cast<const unsigned char*>(key.data.data()));
  cipher.blockSize = EVP_CIPHER_block_size(EVP_aes_128_cfb8());
  return cipher;
}

ByteBuffer* aes_encrypt(const CipherAES& cipher, ByteBuffer* buf) {
  auto* out = (byte_t*) malloc(buf->data.size() + cipher.blockSize - 1);
  int len;
  EVP_EncryptUpdate(cipher.encryptCtx,
                    reinterpret_cast<unsigned char*>(out),
                    &len,
                    reinterpret_cast<const unsigned char*>(buf->data.data()),
                    (int) buf->data.size());
  if (len < 0) {
    std::cerr << "Could not encrypt message" << std::endl;
    return {};
  }
  auto* dst = new ByteBuffer(out, len);
  free(out);
  return dst;
}

ByteBuffer* aes_decrypt(const CipherAES& cipher, ByteBuffer* buf) {
  auto* out = (byte_t*) malloc(buf->data.size() + cipher.blockSize);
  int len;
  EVP_DecryptUpdate(cipher.decryptCtx,
                    reinterpret_cast<unsigned char*>(out),
                    &len,
                    reinterpret_cast<const unsigned char*>(buf->data.data()),
                    (int) buf->data.size());
  if (len < 0) {
    std::cerr << "Could not decrypt message" << std::endl;
    return {};
  }
  auto* dst = new ByteBuffer(out, len);
  free(out);
  return dst;
}