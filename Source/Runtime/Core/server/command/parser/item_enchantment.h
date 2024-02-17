#pragma once

#include "argument_parser.h"

class ItemEnchantmentParser : public ArgumentParser {
 public:
  ItemEnchantmentParser();
  ~ItemEnchantmentParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};