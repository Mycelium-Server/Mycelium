#pragma once

#include "block.h"

class SeaLanternBlock : public Block {
 public:
  SeaLanternBlock();
  ~SeaLanternBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
