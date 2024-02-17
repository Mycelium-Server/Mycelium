#pragma once

#include "argument_parser.h"

class ItemPredicateParser : public ArgumentParser {
 public:
  ItemPredicateParser();
  ~ItemPredicateParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};