#pragma once

#include "block.h"

class PottedDeadBushBlock : public Block {
 public:
  PottedDeadBushBlock();
  ~PottedDeadBushBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
