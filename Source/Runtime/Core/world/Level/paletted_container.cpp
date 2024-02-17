
#include "paletted_container.h"

#include <utility>

PalettedContainer::PalettedContainer(Palette* palette, std::vector<uint16_t> data)
    : palette(palette),
      data(std::move(data)) {}

PalettedContainer::~PalettedContainer() = default;

std::vector<uint16_t> PalettedContainer::getData() const {
  return data;
}

void PalettedContainer::setData(std::vector<uint16_t> v) {
  data = std::move(v);
  dirty = true;
}

Palette* PalettedContainer::getPalette() {
  return palette;
}

void PalettedContainer::setPalette(Palette* p) {
  palette = p;
  dirty = true;
}

std::vector<uint64_t> PalettedContainer::remap() {
  if (dirty) {
    cache = palette->apply(data);
    dirty = false;
  }
  return cache;
}

void PalettedContainer::write(ByteBuffer& out) {
  out.writeByte((uint8_t) palette->bitsPerEntry);
  palette->write(out);
  remap();
  out.writeVarInt((int) cache.size());
  for (uint64_t i: cache) {
    out.writeLong((int64_t) i);
  }
}
