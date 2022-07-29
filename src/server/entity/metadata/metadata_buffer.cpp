#include "metadata_buffer.h"

#define WRITE_ENTRY_HEADER(type) buf.writeByte(idx); buf.writeVarInt(type);

MetadataBuffer::MetadataBuffer(ByteBuffer& buf)
    : buf(buf) {}

MetadataBuffer::~MetadataBuffer() = default;

void MetadataBuffer::writeByte(unsigned char idx, unsigned char value) {
    WRITE_ENTRY_HEADER(0)
    buf.writeByte(value);
}

void MetadataBuffer::writeVarInt(unsigned char idx, int value) {
    WRITE_ENTRY_HEADER(1)
    buf.writeVarInt(value);
}

void MetadataBuffer::writeFloat(unsigned char idx, float value) {
    WRITE_ENTRY_HEADER(2)
    buf.writeFloat(value);
}

void MetadataBuffer::writeString(unsigned char idx, const std::string& value) {
    WRITE_ENTRY_HEADER(3)
    buf.writeString(value);
}

void MetadataBuffer::writeChat(unsigned char idx, const std::string& value) {
    WRITE_ENTRY_HEADER(4)
    buf.writeString(value);
}

void MetadataBuffer::writeOptChat(unsigned char idx, const std::optional<std::string>& value) {
    WRITE_ENTRY_HEADER(5)
    buf.writeByte(value.has_value());
    if (value.has_value()) {
        buf.writeString(value.value());
    }
}

void MetadataBuffer::writeItem(unsigned char idx, const ItemStack& value) {
    WRITE_ENTRY_HEADER(6)
    buf.writeItemStack(value);
}

void MetadataBuffer::writeBool(unsigned char idx, bool value) {
    WRITE_ENTRY_HEADER(7)
    buf.writeByte(value);
}

void MetadataBuffer::writeRotation(unsigned char idx, float x, float y, float z) {
    WRITE_ENTRY_HEADER(8)
    buf.writeFloat(x);
    buf.writeFloat(y);
    buf.writeFloat(z);
}

void MetadataBuffer::writePosition(unsigned char idx, const ProtocolPosition& value) {
    WRITE_ENTRY_HEADER(9)
    buf.writeLong((long long) value.value);
}

void MetadataBuffer::writeOptPosition(unsigned char idx, const std::optional<ProtocolPosition>& value) {
    WRITE_ENTRY_HEADER(10)
    buf.writeByte(value.has_value());
    if (value.has_value()) {
        buf.writeLong((long long) value.value().value);
    }
}

void MetadataBuffer::writeDirection(unsigned char idx, const Direction& value) {
    WRITE_ENTRY_HEADER(11)
    buf.writeVarInt((int) value);
}

void MetadataBuffer::writeOptUUID(unsigned char idx, const std::optional<uuids::uuid>& value) {
    WRITE_ENTRY_HEADER(12)
    buf.writeByte(value.has_value());
    if (value.has_value()) {
        buf.writeUUID(value.value());
    }
}

void MetadataBuffer::writeOptBlockID(unsigned char idx, int value) {
    WRITE_ENTRY_HEADER(13)
    buf.writeVarInt(value);
}

void MetadataBuffer::writeNBT(unsigned char idx, const std::shared_ptr<NBT_Component>& value) {
    WRITE_ENTRY_HEADER(14)
    auto data = value->asByteBuffer();
    buf.writeBytes(data);
}

void MetadataBuffer::writeParticle(unsigned char idx, AbstractParticle* particle) {
    WRITE_ENTRY_HEADER(15)
    particle->write(buf);
}

void MetadataBuffer::writeVillagerData(unsigned char idx, const VillagerData& value) {
    WRITE_ENTRY_HEADER(16)
    buf.writeVarInt((int) value.type);
    buf.writeVarInt((int) value.profession);
    buf.writeVarInt(value.level);
}

void MetadataBuffer::writeOptVarInt(unsigned char idx, const std::optional<int>& value) {
    WRITE_ENTRY_HEADER(17)
    if (value.has_value()) {
        buf.writeVarInt(1 + value.value());
    } else {
        buf.writeVarInt(0);
    }
}

void MetadataBuffer::writePose(unsigned char idx, const Pose& value) {
    WRITE_ENTRY_HEADER(18)
    buf.writeVarInt((int) value);
}

void MetadataBuffer::writePaintingVariant(unsigned char idx, const PaintingVariant& value) {
    WRITE_ENTRY_HEADER(21)
    buf.writeVarInt((int) value);
}

ByteBuffer& MetadataBuffer::finalize() {
    buf.writeByte(0xFF);
    return buf;
}
