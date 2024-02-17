#pragma once

#include "argument_parser.h"

class MobEffectParser : public ArgumentParser {
 public:
  MobEffectParser();
  ~MobEffectParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};