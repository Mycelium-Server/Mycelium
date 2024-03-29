#pragma once

#include "block.h"

class OrangeStainedGlassBlock : public Block {
 public:
  OrangeStainedGlassBlock();
  ~OrangeStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
