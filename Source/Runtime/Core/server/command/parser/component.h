#pragma once

#include "argument_parser.h"

class ComponentParser : public ArgumentParser {
 public:
  ComponentParser();
  ~ComponentParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};