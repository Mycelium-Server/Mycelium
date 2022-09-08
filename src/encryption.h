/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <openssl/err.h>
#include <openssl/rsa.h>
#include <openssl/x509.h>

#include "byte_buffer.h"

struct KeyPairRSA {
  RSA* rsa = nullptr;
  ByteBuffer publicKey;
};

struct CipherAES {
  EVP_CIPHER_CTX* encryptCtx = nullptr;
  EVP_CIPHER_CTX* decryptCtx = nullptr;
  unsigned int blockSize = 0;
};

KeyPairRSA rsa_create_keypair();
ByteBuffer rsa_decrypt(const KeyPairRSA&, const ByteBuffer&);
CipherAES aes_create_cipher(const ByteBuffer&);
ByteBuffer* aes_encrypt(const CipherAES&, ByteBuffer*);
ByteBuffer* aes_decrypt(const CipherAES&, ByteBuffer*);