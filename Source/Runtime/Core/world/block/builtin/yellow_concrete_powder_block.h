#pragma once

#include "block.h"

class YellowConcretePowderBlock : public Block {
 public:
  YellowConcretePowderBlock();
  ~YellowConcretePowderBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
