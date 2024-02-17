#pragma once

#include "argument_parser.h"

class FloatRange : public ArgumentParser {
 public:
  FloatRange();
  ~FloatRange() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};