#pragma once

#include "argument_parser.h"

class Vec3Parser : public ArgumentParser {
 public:
  Vec3Parser();
  ~Vec3Parser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};