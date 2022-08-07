#pragma once

#include <set>
#include <vector>

#include "../../ByteBuffer.h"

class Palette {
 public:
  Palette(int, std::set<unsigned short>);
  virtual ~Palette();

 public:
  virtual std::vector<unsigned long long> apply(std::vector<unsigned short>) = 0;
  virtual void write(ByteBuffer&) = 0;

 public:
  int bitsPerEntry;
  std::set<unsigned short> palette;
};

class SingleValuedPalette : public Palette {
 public:
  explicit SingleValuedPalette(std::set<unsigned short>);
  ~SingleValuedPalette() override;

 public:
  std::vector<unsigned long long> apply(std::vector<unsigned short>) override;
  void write(ByteBuffer&) override;
};

class IndirectPalette : public Palette {
 public:
  IndirectPalette(int, std::set<unsigned short>);
  ~IndirectPalette() override;

 public:
  std::vector<unsigned long long> apply(std::vector<unsigned short>) override;
  void write(ByteBuffer&) override;
};

class DirectPalette : public Palette {
 public:
  DirectPalette();
  ~DirectPalette() override;

 public:
  std::vector<unsigned long long> apply(std::vector<unsigned short>) override;
  void write(ByteBuffer&) override;
};