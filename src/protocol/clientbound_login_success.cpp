#include "clientbound_login_success.h"

ClientboundLoginSuccess::ClientboundLoginSuccess() = default;
ClientboundLoginSuccess::~ClientboundLoginSuccess() = default;

void ClientboundLoginSuccess::write(ByteBuffer& dst) {
    uuids::span<std::byte const, 16> uuidBytes = uuid.as_bytes();
    dst.writeLong((long long) ((uint64_t*)uuidBytes.data())[0]);
    dst.writeLong((long long) ((uint64_t*)uuidBytes.data())[1]);
    dst.writeString(name);
    dst.writeVarInt((int) properties.size());
    for (Property& property : properties) {
        dst.writeString(property.name);
        dst.writeString(property.value);
        dst.writeByte(property.signature.has_value());
        if (property.signature.has_value()) {
            dst.writeString(property.signature.value());
        }
    }
}

int ClientboundLoginSuccess::getPacketID() const {
    return 0x02;
}