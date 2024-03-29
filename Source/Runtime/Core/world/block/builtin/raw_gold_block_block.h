#pragma once

#include "block.h"

class RawGoldBlockBlock : public Block {
 public:
  RawGoldBlockBlock();
  ~RawGoldBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
