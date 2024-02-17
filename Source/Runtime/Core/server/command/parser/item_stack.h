#pragma once

#include "argument_parser.h"

class ItemStackParser : public ArgumentParser {
 public:
  ItemStackParser();
  ~ItemStackParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};