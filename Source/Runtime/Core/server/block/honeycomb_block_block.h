#pragma once

#include "block.h"

class HoneycombBlockBlock : public Block {
 public:
  HoneycombBlockBlock();
  ~HoneycombBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
