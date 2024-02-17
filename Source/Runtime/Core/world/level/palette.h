#pragma once

#include <set>
#include <vector>

#include "../../network/byte_buffer.h"

class Palette {
 public:
  Palette(int, std::set<uint16_t>);
  virtual ~Palette();

 public:
  virtual std::vector<uint64_t> apply(std::vector<uint16_t>) = 0;
  virtual void write(ByteBuffer&) = 0;

 public:
  int bitsPerEntry;
  std::set<uint16_t> palette;
};

class SingleValuedPalette : public Palette {
 public:
  explicit SingleValuedPalette(std::set<uint16_t>);
  ~SingleValuedPalette() override;

 public:
  std::vector<uint64_t> apply(std::vector<uint16_t>) override;
  void write(ByteBuffer&) override;
};

class IndirectPalette : public Palette {
 public:
  IndirectPalette(int, std::set<uint16_t>);
  ~IndirectPalette() override;

 public:
  std::vector<uint64_t> apply(std::vector<uint16_t>) override;
  void write(ByteBuffer&) override;
};

class DirectPalette : public Palette {
 public:
  DirectPalette();
  ~DirectPalette() override;

 public:
  std::vector<uint64_t> apply(std::vector<uint16_t>) override;
  void write(ByteBuffer&) override;
};