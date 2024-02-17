#pragma once

#include "argument_parser.h"

class ParticleParser : public ArgumentParser {
 public:
  ParticleParser();
  ~ParticleParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};