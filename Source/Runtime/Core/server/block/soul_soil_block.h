#pragma once

#include "block.h"

class SoulSoilBlock : public Block {
 public:
  SoulSoilBlock();
  ~SoulSoilBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
