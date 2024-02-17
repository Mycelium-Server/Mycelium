#pragma once

#include "argument_parser.h"

class NbtTagParser : ArgumentParser {
 public:
  NbtTagParser();
  ~NbtTagParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};