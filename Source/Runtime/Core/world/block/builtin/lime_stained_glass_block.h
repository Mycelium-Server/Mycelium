#pragma once

#include "block.h"

class LimeStainedGlassBlock : public Block {
 public:
  LimeStainedGlassBlock();
  ~LimeStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
