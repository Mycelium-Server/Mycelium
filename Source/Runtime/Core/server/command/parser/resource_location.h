#pragma once

#include "argument_parser.h"

class ResourceLocationParser : public ArgumentParser {
 public:
  ResourceLocationParser();
  ~ResourceLocationParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};