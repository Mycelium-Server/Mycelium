#pragma once

#include "block.h"

class RedConcretePowderBlock : public Block {
 public:
  RedConcretePowderBlock();
  ~RedConcretePowderBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
