#pragma once

#include "block.h"

class WeepingVinesPlantBlock : public Block {
 public:
  WeepingVinesPlantBlock();
  ~WeepingVinesPlantBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
