#pragma once

#include "argument_parser.h"

class ColorParser : public ArgumentParser {
 public:
  ColorParser();
  ~ColorParser() override;

 public:
  int getID() const override;
  std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};