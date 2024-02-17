#pragma once

#include "argument_parser.h"

class AngleParser : public ArgumentParser {
 public:
  AngleParser();
  ~AngleParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};