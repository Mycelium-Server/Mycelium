#pragma once

#include "argument_parser.h"

class NbtPathParser : ArgumentParser {
 public:
  NbtPathParser();
  ~NbtPathParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};