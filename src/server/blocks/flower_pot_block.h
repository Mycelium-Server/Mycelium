#pragma once

#include "block.h"

class FlowerPotBlock : public Block {
 public:
  FlowerPotBlock();
  ~FlowerPotBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
