#pragma once

#include "argument_parser.h"

class BlockPredicateParser : public ArgumentParser {
 public:
  BlockPredicateParser();
  ~BlockPredicateParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};