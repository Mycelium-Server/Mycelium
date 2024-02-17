#pragma once

#include "argument_parser.h"

class TemplateMirrorParser : public ArgumentParser {
 public:
  TemplateMirrorParser();
  ~TemplateMirrorParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};