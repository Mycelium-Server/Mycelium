#pragma once

#include "argument_parser.h"

class ColumnPosParser : public ArgumentParser {
 public:
  ColumnPosParser();
  ~ColumnPosParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};