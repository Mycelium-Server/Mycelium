#pragma once

#include "block.h"

class CaveAirBlock : public Block {
 public:
  CaveAirBlock();
  ~CaveAirBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
