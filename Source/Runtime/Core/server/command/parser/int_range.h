#pragma once

#include "argument_parser.h"

class IntRangeParser : public ArgumentParser {
 public:
  IntRangeParser();
  ~IntRangeParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};