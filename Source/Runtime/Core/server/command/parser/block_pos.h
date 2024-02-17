#pragma once

#include "argument_parser.h"

class BlockPosParser : public ArgumentParser {
 public:
  BlockPosParser();
  ~BlockPosParser() override;

  public:
   [[nodiscard]] int getID() const override;
   [[nodiscard]] std::string getIdentifier() const override;
   void writeProperties(ByteBuffer &) const override;
};