#pragma once

#include "block.h"

class DeadTubeCoralBlockBlock : public Block {
 public:
  DeadTubeCoralBlockBlock();
  ~DeadTubeCoralBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
