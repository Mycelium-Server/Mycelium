#pragma once

#include "argument_parser.h"

class GameProfileParser : public ArgumentParser {
 public:
  GameProfileParser();
  ~GameProfileParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};