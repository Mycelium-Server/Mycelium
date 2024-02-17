#pragma once

#include "argument_parser.h"

class BrigadierFloatParser : public ArgumentParser {
 public:
  BrigadierFloatParser();
  ~BrigadierFloatParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;

 public:
  std::optional<float> min;
  std::optional<float> max;
};