
#include "heightmap.h"

#include "../../NBT.h"

Heightmap::Heightmap() = default;
Heightmap::~Heightmap() = default;

void Heightmap::set(short height) {
  data[currentLong] &= ~(0b11111111ull << currentBit);
  data[currentLong] |= (height & 0b111111111ull) << currentBit;
}

void Heightmap::resetIndex() {
  currentBit = 1;
  currentLong = 0;
}

short Heightmap::next() {
  auto prev = (short) ((data[currentLong] & (0b111111111ull << currentBit)) >> currentBit);
  currentBit += 9;
  if (currentBit >= 64) {
    currentBit = 1;
    currentLong++;
  }
  return prev;
}

void Heightmap::write(ByteBuffer& out) {
  ByteBuffer nbt = TAG_Compound(NBT_Components {
                                    std::make_shared<TAG_Long_Array>("MOTION_BLOCKING", 37, (int64_t*) data),
                                    std::make_shared<TAG_Long_Array>("WORLD_SURFACE", 37, (int64_t*) data)})
                       .asByteBuffer();
  out.writeBytes(nbt);
}
