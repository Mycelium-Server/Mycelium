#pragma once

#include "block.h"

class DragonEggBlock : public Block {
 public:
  DragonEggBlock();
  ~DragonEggBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
