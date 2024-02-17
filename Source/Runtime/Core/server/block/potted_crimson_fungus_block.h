#pragma once

#include "block.h"

class PottedCrimsonFungusBlock : public Block {
 public:
  PottedCrimsonFungusBlock();
  ~PottedCrimsonFungusBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
