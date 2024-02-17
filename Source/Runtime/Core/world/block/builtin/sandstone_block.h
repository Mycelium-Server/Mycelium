#pragma once

#include "block.h"

class SandstoneBlock : public Block {
 public:
  SandstoneBlock();
  ~SandstoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
