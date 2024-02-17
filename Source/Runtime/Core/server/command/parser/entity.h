#pragma once

#include "argument_parser.h"

class EntityParser : public ArgumentParser {
 public:
  EntityParser();
  ~EntityParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;

 public:
  bool onlySingleEntity = false;
  bool allowOnlyPlayers = false;
};