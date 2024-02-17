#pragma once

#include "argument_parser.h"

class UuidParser : public ArgumentParser {
 public:
  UuidParser();
  ~UuidParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};