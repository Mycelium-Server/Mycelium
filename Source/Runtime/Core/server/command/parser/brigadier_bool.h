#pragma once

#include "argument_parser.h"

class BrigadierBoolParser : public ArgumentParser {
 public:
  BrigadierBoolParser();
  ~BrigadierBoolParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};