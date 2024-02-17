#pragma once

#include "block.h"

class DeepslateTilesBlock : public Block {
 public:
  DeepslateTilesBlock();
  ~DeepslateTilesBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
