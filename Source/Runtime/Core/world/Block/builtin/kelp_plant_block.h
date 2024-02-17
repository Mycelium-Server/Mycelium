#pragma once

#include "block.h"

class KelpPlantBlock : public Block {
 public:
  KelpPlantBlock();
  ~KelpPlantBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
