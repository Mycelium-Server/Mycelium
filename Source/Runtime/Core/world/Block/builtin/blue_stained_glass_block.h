#pragma once

#include "block.h"

class BlueStainedGlassBlock : public Block {
 public:
  BlueStainedGlassBlock();
  ~BlueStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
