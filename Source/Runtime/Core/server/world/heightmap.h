#pragma once

#include "../../byte_buffer.h"

class Heightmap {
 public:
  Heightmap();
  ~Heightmap();

 public:
  short next();
  void resetIndex();
  void set(short);
  void write(ByteBuffer&);

 public:
  uint64_t data[37] {};

 private:
  int currentLong = 0;
  int currentBit = 1;
};