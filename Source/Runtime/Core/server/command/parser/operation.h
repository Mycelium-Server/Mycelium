#pragma once

#include "argument_parser.h"

class OperationParser : public ArgumentParser {
 public:
  OperationParser();
  ~OperationParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};