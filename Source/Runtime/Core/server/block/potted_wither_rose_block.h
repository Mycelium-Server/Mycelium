#pragma once

#include "block.h"

class PottedWitherRoseBlock : public Block {
 public:
  PottedWitherRoseBlock();
  ~PottedWitherRoseBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
