#pragma once

#include "block.h"

class RedMushroomBlock : public Block {
 public:
  RedMushroomBlock();
  ~RedMushroomBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
