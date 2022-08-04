#pragma once

#include "block.h"

class GildedBlackstoneBlock : public Block {
 public:
  GildedBlackstoneBlock();
  ~GildedBlackstoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
