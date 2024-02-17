#pragma once

#include "argument_parser.h"

class ObjectiveCriteriaParser : public ArgumentParser {
 public:
  ObjectiveCriteriaParser();
  ~ObjectiveCriteriaParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};