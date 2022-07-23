#include "handlers.h"

PacketDecrypt::PacketDecrypt(const CipherAES& cipher)
    : cipher(cipher) {}

PacketDecrypt::~PacketDecrypt() = default;

bool PacketDecrypt::onConnect(ConnectionContext*) {
    return true;
}

bool PacketDecrypt::onDisconnect(ConnectionContext*) {
    return true;
}

bool PacketDecrypt::decode(ConnectionContext* ctx, void* in, std::vector<void*>& out) {
    auto* inbuf = (ByteBuffer*) in;
    out.push_back(aes_decrypt(cipher, inbuf));
    delete inbuf;
    return true;
}