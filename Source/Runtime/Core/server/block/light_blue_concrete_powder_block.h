#pragma once

#include "block.h"

class LightBlueConcretePowderBlock : public Block {
 public:
  LightBlueConcretePowderBlock();
  ~LightBlueConcretePowderBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
