#pragma once

#include "block.h"

class DeadBushBlock : public Block {
 public:
  DeadBushBlock();
  ~DeadBushBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
