#pragma once

#include "argument_parser.h"

class BlockStateParser : public ArgumentParser {
 public:
  BlockStateParser();
  ~BlockStateParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};