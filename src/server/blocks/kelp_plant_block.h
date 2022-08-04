#pragma once

#include "block.h"

class KelpPlantBlock : public Block {
 public:
  KelpPlantBlock();
  ~KelpPlantBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
