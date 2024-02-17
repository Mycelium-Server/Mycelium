#pragma once

#include "argument_parser.h"

class BrigadierIntegerParser : public ArgumentParser {
 public:
  BrigadierIntegerParser();
  ~BrigadierIntegerParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;

 public:
  std::optional<int> min;
  std::optional<int> max;
};