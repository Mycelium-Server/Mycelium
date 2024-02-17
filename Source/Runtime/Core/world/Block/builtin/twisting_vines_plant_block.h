#pragma once

#include "block.h"

class TwistingVinesPlantBlock : public Block {
 public:
  TwistingVinesPlantBlock();
  ~TwistingVinesPlantBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
