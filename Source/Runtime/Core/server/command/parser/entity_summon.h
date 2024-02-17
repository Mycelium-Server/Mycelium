#pragma once

#include "argument_parser.h"

class EntitySummonParser : public ArgumentParser {
 public:
  EntitySummonParser();
  ~EntitySummonParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};