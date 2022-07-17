#include "handlers.h"

PacketEncrypt::PacketEncrypt(const CipherAES& cipher)
    : cipher(cipher) {
    
}

PacketEncrypt::~PacketEncrypt() {

}

bool PacketEncrypt::encode(ConnectionContext* ctx, void* in, void*& out) {
    ByteBuffer* inbuf = (ByteBuffer*) in;
    out = new ByteBuffer(aes_encrypt(cipher, *inbuf).data);
    delete inbuf;
    return true;
}