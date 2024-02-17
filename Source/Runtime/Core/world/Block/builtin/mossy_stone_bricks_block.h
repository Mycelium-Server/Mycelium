#pragma once

#include "block.h"

class MossyStoneBricksBlock : public Block {
 public:
  MossyStoneBricksBlock();
  ~MossyStoneBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
