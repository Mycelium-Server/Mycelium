#pragma once

#include "block.h"

class BrownWoolBlock : public Block {
 public:
  BrownWoolBlock();
  ~BrownWoolBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
