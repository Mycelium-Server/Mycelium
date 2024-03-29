#pragma once

#include "block.h"

class TintedGlassBlock : public Block {
 public:
  TintedGlassBlock();
  ~TintedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
