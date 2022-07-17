#include "clientbound_login_success.h"

ClientboundLoginSuccess::ClientboundLoginSuccess() {

}

ClientboundLoginSuccess::~ClientboundLoginSuccess() {

}

void ClientboundLoginSuccess::write(ByteBuffer& dst) {
    uuids::span<std::byte const, 16> uuidBytes = uuid.as_bytes();
    dst.writeLong(((uint64_t*)uuidBytes.data())[0]);
    dst.writeLong(((uint64_t*)uuidBytes.data())[1]);
    dst.writeString(name);
    dst.writeVarInt(properties.size());
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
    return 2;
}