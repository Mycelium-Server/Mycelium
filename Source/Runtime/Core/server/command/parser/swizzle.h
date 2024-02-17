#pragma once

#include "argument_parser.h"

class SwizzleParser : public ArgumentParser {
 public:
  SwizzleParser();
  ~SwizzleParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};