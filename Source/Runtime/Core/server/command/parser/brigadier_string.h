#pragma once

#include "argument_parser.h"

class BrigadierStringParser : public ArgumentParser {
 public:
  BrigadierStringParser();
  ~BrigadierStringParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;

 public:
  enum {
    SINGLE_WORD = 0,
    QUOTABLE_PHRASE = 1,
    GREEDY_PHRASE = 2,
  } type = SINGLE_WORD;
};