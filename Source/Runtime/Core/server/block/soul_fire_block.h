#pragma once

#include "block.h"

class SoulFireBlock : public Block {
 public:
  SoulFireBlock();
  ~SoulFireBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
