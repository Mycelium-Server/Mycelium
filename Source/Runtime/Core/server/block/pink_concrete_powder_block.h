#pragma once

#include "block.h"

class PinkConcretePowderBlock : public Block {
 public:
  PinkConcretePowderBlock();
  ~PinkConcretePowderBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
