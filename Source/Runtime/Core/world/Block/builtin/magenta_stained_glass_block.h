#pragma once

#include "block.h"

class MagentaStainedGlassBlock : public Block {
 public:
  MagentaStainedGlassBlock();
  ~MagentaStainedGlassBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
