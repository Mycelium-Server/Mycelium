#pragma once

#include "argument_parser.h"

class FunctionParser : public ArgumentParser {
 public:
  FunctionParser();
  ~FunctionParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};