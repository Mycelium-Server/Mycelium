#pragma once

#include "argument_parser.h"

class TemplateRotationParser : public ArgumentParser {
 public:
  TemplateRotationParser();
  ~TemplateRotationParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};