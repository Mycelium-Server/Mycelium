#pragma once

#include "block.h"

class DeadBrainCoralBlockBlock : public Block {
 public:
  DeadBrainCoralBlockBlock();
  ~DeadBrainCoralBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
