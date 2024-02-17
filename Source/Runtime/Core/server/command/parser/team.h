#pragma once

#include "argument_parser.h"

class TeamParser : public ArgumentParser {
 public:
  TeamParser();
  ~TeamParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};