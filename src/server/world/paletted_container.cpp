#include "paletted_container.h"

#include <utility>

PalettedContainer::PalettedContainer(Palette* palette, std::vector<short> data)
    : palette(palette),
      data(std::move(data)) {}

PalettedContainer::~PalettedContainer() = default;

std::vector<short> PalettedContainer::getData() const {
  return data;
}

void PalettedContainer::setData(std::vector<short> v) {
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

std::vector<unsigned long long> PalettedContainer::remap() {
  if (dirty) {
    cache = palette->apply(data);
    dirty = false;
  }
  return cache;
}

void PalettedContainer::write(ByteBuffer& out) {
  out.writeByte((unsigned char) palette->bitsPerEntry);
  palette->write(out);
  remap();
  out.writeVarInt((int) cache.size());
  for (unsigned long long i: cache) {
    out.writeLong((long long) i);
  }
}
