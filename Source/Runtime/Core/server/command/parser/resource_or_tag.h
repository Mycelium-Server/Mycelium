#pragma once

#include "argument_parser.h"

class ResourceOrTagParser : public ArgumentParser {
 public:
  ResourceOrTagParser();
  ~ResourceOrTagParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;

 public:
  std::string registry;
};