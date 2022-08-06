#pragma once

#include <vector>

#include "../../ByteBuffer.h"
#include "palette.h"

class PalettedContainer {
 public:
  PalettedContainer(Palette*, std::vector<unsigned short>);
  ~PalettedContainer();

 public:
  [[nodiscard]] std::vector<unsigned short> getData() const;
  void setData(std::vector<unsigned short>);
  Palette* getPalette();
  void setPalette(Palette*);
  std::vector<unsigned long long> remap();
  void write(ByteBuffer&);

 private:
  Palette* palette;
  std::vector<unsigned short> data;
  bool dirty = true;
  std::vector<unsigned long long> cache;
};