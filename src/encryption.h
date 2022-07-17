#pragma once

#include <openssl/rsa.h>
#include <openssl/err.h>
#include <openssl/x509.h>

#include "ByteBuffer.h"

struct KeyPairRSA {
    RSA* rsa = 0;
    ByteBuffer publicKey;
};

struct CipherAES {
    EVP_CIPHER_CTX* encryptCtx = 0;
    EVP_CIPHER_CTX* decryptCtx = 0;
    unsigned int blockSize = 0;
};

KeyPairRSA rsa_create_keypair();
ByteBuffer rsa_decrypt(const KeyPairRSA&, const ByteBuffer&);
CipherAES aes_create_cipher(const ByteBuffer&);
ByteBuffer aes_encrypt(const CipherAES&, const ByteBuffer&);
ByteBuffer aes_decrypt(const CipherAES&, const ByteBuffer&);