#pragma once

#include "block.h"

class StoneBlock : public Block {
 public:
  StoneBlock();
  ~StoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
