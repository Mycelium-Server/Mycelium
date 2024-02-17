#pragma once

#include "block.h"

class DeadFireCoralBlockBlock : public Block {
 public:
  DeadFireCoralBlockBlock();
  ~DeadFireCoralBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
