#pragma once

#include <openssl/err.h>
#include <openssl/rsa.h>
#include <openssl/x509.h>

#include "network/byte_buffer.h"

struct KeyPairRSA {
  RSA* rsa = nullptr;
  ByteBuffer publicKey;
};

struct CipherAES {
  EVP_CIPHER_CTX* encryptCtx = nullptr;
  EVP_CIPHER_CTX* decryptCtx = nullptr;
  uint32_t blockSize = 0;
};

KeyPairRSA rsa_create_keypair();
ByteBuffer rsa_decrypt(const KeyPairRSA&, const ByteBuffer&);
CipherAES aes_create_cipher(const ByteBuffer&);
ByteBuffer* aes_encrypt(const CipherAES&, ByteBuffer*);
ByteBuffer* aes_decrypt(const CipherAES&, ByteBuffer*);