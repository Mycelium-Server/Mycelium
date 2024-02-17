#pragma once

#include "argument_parser.h"

class DimensionParser : public ArgumentParser {
 public:
  DimensionParser();
  ~DimensionParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};