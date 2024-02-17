#pragma once

#include "argument_parser.h"

class MessageParser : public ArgumentParser {
 public:
  MessageParser();
  ~MessageParser() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::string getIdentifier() const override;
  void writeProperties(ByteBuffer &) const override;
};