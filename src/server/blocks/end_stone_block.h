#pragma once

#include "block.h"

class EndStoneBlock : public Block {
 public:
  EndStoneBlock();
  ~EndStoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
