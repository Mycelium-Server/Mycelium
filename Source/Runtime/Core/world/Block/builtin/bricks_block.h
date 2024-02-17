#pragma once

#include "block.h"

class BricksBlock : public Block {
 public:
  BricksBlock();
  ~BricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
