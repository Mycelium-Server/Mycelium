#pragma once

#include "block.h"

class DeadFireCoralBlockBlock : public Block {
 public:
  DeadFireCoralBlockBlock();
  ~DeadFireCoralBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
