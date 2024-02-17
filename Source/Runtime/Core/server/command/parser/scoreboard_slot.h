#pragma once

#include "argument_parser.h"

class ScoreboardSlotParser : public ArgumentParser {
 public:
  ScoreboardSlotParser();
  ~ScoreboardSlotParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};