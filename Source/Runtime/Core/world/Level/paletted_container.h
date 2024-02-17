#pragma once

#include <vector>

#include "../../network/byte_buffer.h"
#include "palette.h"

class PalettedContainer {
 public:
  PalettedContainer(Palette*, std::vector<uint16_t>);
  ~PalettedContainer();

 public:
  [[nodiscard]] std::vector<uint16_t> getData() const;
  void setData(std::vector<uint16_t>);
  Palette* getPalette();
  void setPalette(Palette*);
  std::vector<uint64_t> remap();
  void write(ByteBuffer&);

 private:
  Palette* palette;
  std::vector<uint16_t> data;
  bool dirty = true;
  std::vector<uint64_t> cache;
};