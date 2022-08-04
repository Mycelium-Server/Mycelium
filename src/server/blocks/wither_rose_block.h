#pragma once

#include "block.h"

class WitherRoseBlock : public Block {
 public:
  WitherRoseBlock();
  ~WitherRoseBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
