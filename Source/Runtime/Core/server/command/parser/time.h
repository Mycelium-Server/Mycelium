#pragma once

#include "argument_parser.h"

class TimeParser : public ArgumentParser {
 public:
  TimeParser();
  ~TimeParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};