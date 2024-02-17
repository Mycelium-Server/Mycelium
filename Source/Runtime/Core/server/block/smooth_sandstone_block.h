#pragma once

#include "block.h"

class SmoothSandstoneBlock : public Block {
 public:
  SmoothSandstoneBlock();
  ~SmoothSandstoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
