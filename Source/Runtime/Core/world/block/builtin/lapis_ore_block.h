#pragma once

#include "block.h"

class LapisOreBlock : public Block {
 public:
  LapisOreBlock();
  ~LapisOreBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
