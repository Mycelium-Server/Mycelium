#pragma once

#include "block.h"

class DeepslateTilesBlock : public Block {
 public:
  DeepslateTilesBlock();
  ~DeepslateTilesBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
