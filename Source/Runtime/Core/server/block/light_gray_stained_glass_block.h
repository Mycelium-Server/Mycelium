#pragma once

#include "block.h"

class LightGrayStainedGlassBlock : public Block {
 public:
  LightGrayStainedGlassBlock();
  ~LightGrayStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
