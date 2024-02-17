#pragma once

#include "argument_parser.h"

class ItemSlotParser : public ArgumentParser {
 public:
  ItemSlotParser();
  ~ItemSlotParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};