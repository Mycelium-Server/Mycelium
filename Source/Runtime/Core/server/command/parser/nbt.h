#pragma once

#include "argument_parser.h"

class NbtParser : ArgumentParser {
 public:
  NbtParser();
  ~NbtParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};