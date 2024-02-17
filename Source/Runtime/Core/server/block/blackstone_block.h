#pragma once

#include "block.h"

class BlackstoneBlock : public Block {
 public:
  BlackstoneBlock();
  ~BlackstoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
