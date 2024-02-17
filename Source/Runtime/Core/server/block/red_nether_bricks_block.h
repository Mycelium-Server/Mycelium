#pragma once

#include "block.h"

class RedNetherBricksBlock : public Block {
 public:
  RedNetherBricksBlock();
  ~RedNetherBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
