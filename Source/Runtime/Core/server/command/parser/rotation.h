#pragma once

#include "argument_parser.h"

class RotationParser : public ArgumentParser {
 public:
  RotationParser();
  ~RotationParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};