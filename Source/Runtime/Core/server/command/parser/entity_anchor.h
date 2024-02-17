#pragma once

#include "argument_parser.h"

class EntityAnchorParser : public ArgumentParser {
 public:
  EntityAnchorParser();
  ~EntityAnchorParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};