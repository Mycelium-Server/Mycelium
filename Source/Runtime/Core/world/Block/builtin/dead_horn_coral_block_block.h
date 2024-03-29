#pragma once

#include "block.h"

class DeadHornCoralBlockBlock : public Block {
 public:
  DeadHornCoralBlockBlock();
  ~DeadHornCoralBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
