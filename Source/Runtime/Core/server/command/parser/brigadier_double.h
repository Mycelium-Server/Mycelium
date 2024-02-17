#pragma once

#include "argument_parser.h"

class BrigadierDoubleParser : public ArgumentParser {
 public:
  BrigadierDoubleParser();
  ~BrigadierDoubleParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;

 public:
  std::optional<double> min;
  std::optional<double> max;
};