#pragma once

#include "block.h"

class PottedFernBlock : public Block {
 public:
  PottedFernBlock();
  ~PottedFernBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
