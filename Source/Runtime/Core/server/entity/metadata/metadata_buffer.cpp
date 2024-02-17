
#include "metadata_buffer.h"

#define WRITE_ENTRY_HEADER(type) \
  buf.writeByte(idx);            \
  buf.writeVarInt(type);

MetadataBuffer::MetadataBuffer(ByteBuffer& buf)
    : buf(buf) {}

MetadataBuffer::~MetadataBuffer() = default;

void MetadataBuffer::writeByte(uint8_t idx, uint8_t value) {
  WRITE_ENTRY_HEADER(0)
  buf.writeByte(value);
}

void MetadataBuffer::writeVarInt(uint8_t idx, int value) {
  WRITE_ENTRY_HEADER(1)
  buf.writeVarInt(value);
}

void MetadataBuffer::writeFloat(uint8_t idx, float value) {
  WRITE_ENTRY_HEADER(2)
  buf.writeFloat(value);
}

void MetadataBuffer::writeString(uint8_t idx, const std::string& value) {
  WRITE_ENTRY_HEADER(3)
  buf.writeString(value);
}

void MetadataBuffer::writeChat(uint8_t idx, const std::string& value) {
  WRITE_ENTRY_HEADER(4)
  buf.writeString(value);
}

void MetadataBuffer::writeOptChat(uint8_t idx, const std::optional<std::string>& value) {
  WRITE_ENTRY_HEADER(5)
  buf.writeByte(value.has_value());
  if (value.has_value()) {
    buf.writeString(value.value());
  }
}

void MetadataBuffer::writeItem(uint8_t idx, const ItemStack& value) {
  WRITE_ENTRY_HEADER(6)
  buf.writeItemStack(value);
}

void MetadataBuffer::writeBool(uint8_t idx, bool value) {
  WRITE_ENTRY_HEADER(7)
  buf.writeByte(value);
}

void MetadataBuffer::writeRotation(uint8_t idx, float x, float y, float z) {
  WRITE_ENTRY_HEADER(8)
  buf.writeFloat(x);
  buf.writeFloat(y);
  buf.writeFloat(z);
}

void MetadataBuffer::writePosition(uint8_t idx, const BlockPosition& value) {
  WRITE_ENTRY_HEADER(9)
  buf.writeBlockPosition(value);
}

void MetadataBuffer::writeOptPosition(uint8_t idx, const std::optional<BlockPosition>& value) {
  WRITE_ENTRY_HEADER(10)
  buf.writeByte(value.has_value());
  if (value.has_value()) {
    buf.writeBlockPosition(value.value());
  }
}

void MetadataBuffer::writeDirection(uint8_t idx, const Direction& value) {
  WRITE_ENTRY_HEADER(11)
  buf.writeVarInt((int) value);
}

void MetadataBuffer::writeOptUUID(uint8_t idx, const std::optional<uuids::uuid>& value) {
  WRITE_ENTRY_HEADER(12)
  buf.writeByte(value.has_value());
  if (value.has_value()) {
    buf.writeUUID(value.value());
  }
}

void MetadataBuffer::writeOptBlockID(uint8_t idx, int value) {
  WRITE_ENTRY_HEADER(13)
  buf.writeVarInt(value);
}

void MetadataBuffer::writeNBT(uint8_t idx, const std::shared_ptr<NBT_Component>& value) {
  WRITE_ENTRY_HEADER(14)
  auto data = value->asByteBuffer();
  buf.writeBytes(data);
}

void MetadataBuffer::writeParticle(uint8_t idx, AbstractParticle* particle) {
  WRITE_ENTRY_HEADER(15)
  particle->write(buf);
}

void MetadataBuffer::writeVillagerData(uint8_t idx, const VillagerData& value) {
  WRITE_ENTRY_HEADER(16)
  buf.writeVarInt((int) value.type);
  buf.writeVarInt((int) value.profession);
  buf.writeVarInt(value.level);
}

void MetadataBuffer::writeOptVarInt(uint8_t idx, const std::optional<int>& value) {
  WRITE_ENTRY_HEADER(17)
  if (value.has_value()) {
    buf.writeVarInt(1 + value.value());
  } else {
    buf.writeVarInt(0);
  }
}

void MetadataBuffer::writePose(uint8_t idx, const Pose& value) {
  WRITE_ENTRY_HEADER(18)
  buf.writeVarInt((int) value);
}

void MetadataBuffer::writeCatVariant(uint8_t idx, const CatVariant& value) {
  WRITE_ENTRY_HEADER(19)
  buf.writeVarInt((int) value);
}

void MetadataBuffer::writeFrogVariant(uint8_t idx, const FrogVariant& value) {
  WRITE_ENTRY_HEADER(20)
  buf.writeVarInt((int) value);
}

void MetadataBuffer::writePaintingVariant(uint8_t idx, const PaintingVariant& value) {
  WRITE_ENTRY_HEADER(21)
  buf.writeVarInt((int) value);
}

ByteBuffer& MetadataBuffer::finalize() {
  buf.writeByte(0xFF);
  return buf;
}
