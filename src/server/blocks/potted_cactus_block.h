#pragma once

#include "block.h"

class PottedCactusBlock : public Block {
 public:
  PottedCactusBlock();
  ~PottedCactusBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
