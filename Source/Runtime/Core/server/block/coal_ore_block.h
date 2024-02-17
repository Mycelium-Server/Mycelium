#pragma once

#include "block.h"

class CoalOreBlock : public Block {
 public:
  CoalOreBlock();
  ~CoalOreBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
