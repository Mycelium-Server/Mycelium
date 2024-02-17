#pragma once

#include "block.h"

class PottedBrownMushroomBlock : public Block {
 public:
  PottedBrownMushroomBlock();
  ~PottedBrownMushroomBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
