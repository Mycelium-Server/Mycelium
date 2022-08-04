#pragma once

#include "block.h"

class PottedJungleSaplingBlock : public Block {
 public:
  PottedJungleSaplingBlock();
  ~PottedJungleSaplingBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
