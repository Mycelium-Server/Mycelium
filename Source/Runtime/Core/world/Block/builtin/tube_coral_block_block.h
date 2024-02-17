#pragma once

#include "block.h"

class TubeCoralBlockBlock : public Block {
 public:
  TubeCoralBlockBlock();
  ~TubeCoralBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
