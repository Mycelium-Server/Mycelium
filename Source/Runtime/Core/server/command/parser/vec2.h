#pragma once

#include "argument_parser.h"

class Vec2Parser : public ArgumentParser {
 public:
  Vec2Parser();
  ~Vec2Parser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};