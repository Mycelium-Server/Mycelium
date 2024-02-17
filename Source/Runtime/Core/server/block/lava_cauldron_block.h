#pragma once

#include "block.h"

class LavaCauldronBlock : public Block {
 public:
  LavaCauldronBlock();
  ~LavaCauldronBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
