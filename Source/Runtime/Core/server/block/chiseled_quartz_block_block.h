#pragma once

#include "block.h"

class ChiseledQuartzBlockBlock : public Block {
 public:
  ChiseledQuartzBlockBlock();
  ~ChiseledQuartzBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
