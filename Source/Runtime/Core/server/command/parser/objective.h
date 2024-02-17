#pragma once

#include "argument_parser.h"

class ObjectiveParser : public ArgumentParser {
 public:
  ObjectiveParser();
  ~ObjectiveParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};