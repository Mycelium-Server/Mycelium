#ifndef MYCELIUM_ENCRYPTION_H
#define MYCELIUM_ENCRYPTION_H

#include <openssl/rsa.h>
#include <openssl/err.h>
#include <openssl/pem.h>
#include "ByteBuffer.h"
#include "DER.h"
#include "Base64.h"

struct RSAKeyPairDER {
    RSA* rsa = NULL;
    ByteBuffer key_public;
    ByteBuffer key_private;
    ByteBuffer key_public_der;
};

struct AES_CFB8_Data {
    EVP_CIPHER_CTX* ctx_encrypt = NULL;
    EVP_CIPHER_CTX* ctx_decrypt = NULL;
    unsigned int _block_size = 0;
};

static void erase_substr(std::string& str, const std::string& substr) {
    size_t pos = str.find(substr);
    if(pos != std::string::npos) {
        str.erase(pos, substr.size());
    }
}

RSAKeyPairDER generate_encryption_request_key_pair() {
    RSA* rsa = NULL;
    BIGNUM* bn = NULL;

    unsigned long e = RSA_F4;

    bn = BN_new();
    BN_set_word(bn, e);

    rsa = RSA_new();
    RSA_generate_key_ex(rsa, 1024, bn, NULL);

    BIO* key_public_bio = BIO_new(BIO_s_mem());
    PEM_write_bio_RSAPublicKey(key_public_bio, rsa);
    int key_public_len = BIO_pending(key_public_bio);
    char* key_public = (char*)calloc(key_public_len, 1);
    BIO_read(key_public_bio, key_public, key_public_len);

    BIO* key_private_bio = BIO_new(BIO_s_mem());
    PEM_write_bio_RSAPrivateKey(key_private_bio, rsa, NULL, NULL, 0, NULL, NULL);
    int key_private_len = BIO_pending(key_private_bio);
    char* key_private = (char*)calloc(key_private_len, 1);
    BIO_read(key_private_bio, key_private, key_private_len);

    std::string key_public_raw;
    for(int i = 0; i < key_public_len; i++) key_public_raw += key_public[i];
    erase_substr(key_public_raw, "-----BEGIN RSA PUBLIC KEY-----");
    erase_substr(key_public_raw, "-----BEGIN PUBLIC KEY-----");
    erase_substr(key_public_raw, "-----END RSA PUBLIC KEY-----");
    erase_substr(key_public_raw, "-----END PUBLIC KEY-----");
    key_public_raw = base64_decode(key_public_raw, true);

    std::string key_private_raw;
    for(int i = 0; i < key_private_len; i++) key_private_raw += key_private[i];
    erase_substr(key_private_raw, "-----BEGIN RSA PRIVATE KEY-----");
    erase_substr(key_private_raw, "-----BEGIN PRIVATE KEY-----");
    erase_substr(key_private_raw, "-----END RSA PRIVATE KEY-----");
    erase_substr(key_private_raw, "-----END PRIVATE KEY-----");
    key_private_raw = base64_decode(key_private_raw, true);

    ByteBuffer kpubr_buf(key_public_raw);

    ByteBuffer public_key_der;
    ByteBuffer rsa_algid = object_identifier("1.2.840.113549.1.1.1");
    ByteBuffer utmp, utmp2;

    utmp.writeByte(0x06); // object identifier
    der_write_length(utmp, rsa_algid.bytes.size());
    utmp.writeByteBuffer(rsa_algid);
    utmp.writeByte(0x05); // null
    utmp.writeByte(0);

    utmp2.writeByte(0x30); // sequence
    der_write_length(utmp2, utmp.bytes.size());
    utmp2.writeByteBuffer(utmp);
    utmp2.writeByte(0x03); // bit string
    der_write_length(utmp2, key_public_raw.size() + 1);
    utmp2.writeByte(0);
    for(char c : key_public_raw) utmp2.writeByte((byte_t)c);

    public_key_der.writeByte(0x30); // sequence
    der_write_length(public_key_der, utmp2.bytes.size());
    public_key_der.writeByteBuffer(utmp2);

    /*
     * Sequence
     * | Sequence
     * | | Object Id
     * | | Parameters (Appears to be NULL)
     * | Bit String > encapsulates:
     * | > Sequence
     * | > | Integer
     * | > | Integer
     */

    RSAKeyPairDER keypair;
    keypair.rsa = rsa;
    keypair.key_public = ByteBuffer(key_public_raw);
    keypair.key_private = ByteBuffer(key_private_raw);
    keypair.key_public_der = public_key_der;

    BIO_free_all(key_public_bio);
    BIO_free_all(key_private_bio);
    free(key_public);
    free(key_private);

    return keypair;
}

AES_CFB8_Data initialize_aes_encryption(ByteBuffer shared_secret) {
    AES_CFB8_Data data;

    data.ctx_encrypt = EVP_CIPHER_CTX_new();
    EVP_CIPHER_CTX_init(data.ctx_encrypt);
    EVP_EncryptInit_ex(data.ctx_encrypt, EVP_aes_128_cfb8(), NULL, shared_secret.bytes.data(), shared_secret.bytes.data());

    data.ctx_decrypt = EVP_CIPHER_CTX_new();
    EVP_CIPHER_CTX_init(data.ctx_decrypt);
    EVP_DecryptInit_ex(data.ctx_decrypt, EVP_aes_128_cfb8(), NULL, shared_secret.bytes.data(), shared_secret.bytes.data());

    data._block_size = EVP_CIPHER_block_size(EVP_aes_128_cfb8());

    return data;
}

ByteBuffer rsa_decrypt(RSAKeyPairDER& keypair, const ByteBuffer& buf) {
    unsigned char* out = (unsigned char*)calloc(buf.bytes.size(), 1);
    int length = RSA_private_decrypt(buf.bytes.size(), buf.bytes.data(), out, keypair.rsa, RSA_PKCS1_PADDING);
    if(length < 0) {
        fprintf(stderr, "rsa_decrypt: failed to decrypt message\n");
        return {};
    }
    ByteBuffer dst(out, length);
    free(out);
    return dst;
}

ByteBuffer aes_encrypt(AES_CFB8_Data& cipher, const ByteBuffer& buf) {
    unsigned char* out = (unsigned char*)calloc(buf.bytes.size() + cipher._block_size-1, 1);
    int len;
    EVP_EncryptUpdate(cipher.ctx_encrypt, out, &len, buf.bytes.data(), buf.bytes.size());
    if(len < 0) {
        fprintf(stderr, "rsa_encrypt: failed to encrypt message\n");
        return {};
    }
    ByteBuffer dst(out, len);
    free(out);
    return dst;
}

ByteBuffer aes_decrypt(AES_CFB8_Data& cipher, const ByteBuffer& buf) {
    unsigned char* out = (unsigned char*)calloc(buf.bytes.size() + cipher._block_size, 1);
    int len;
    EVP_DecryptUpdate(cipher.ctx_decrypt, out, &len, buf.bytes.data(), buf.bytes.size());
    if(len < 0) {
        fprintf(stderr, "rsa_decrypt: failed to decrypt message\n");
        return {};
    }
    ByteBuffer dst(out, len);
    free(out);
    return dst;
}

#endif //MYCELIUM_ENCRYPTION_H
