#pragma once

#include "block.h"

class SmoothRedSandstoneBlock : public Block {
 public:
  SmoothRedSandstoneBlock();
  ~SmoothRedSandstoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
