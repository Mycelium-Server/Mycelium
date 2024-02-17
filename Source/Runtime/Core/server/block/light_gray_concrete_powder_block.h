#pragma once

#include "block.h"

class LightGrayConcretePowderBlock : public Block {
 public:
  LightGrayConcretePowderBlock();
  ~LightGrayConcretePowderBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
