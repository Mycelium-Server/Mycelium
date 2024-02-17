#pragma once

#include "argument_parser.h"

class ScoreHolderParser : public ArgumentParser {
 public:
  ScoreHolderParser();
  ~ScoreHolderParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;

 public:
  bool allowMultiple = false;
};