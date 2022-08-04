#pragma once

#include "block.h"

class SlimeBlockBlock : public Block {
 public:
  SlimeBlockBlock();
  ~SlimeBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
