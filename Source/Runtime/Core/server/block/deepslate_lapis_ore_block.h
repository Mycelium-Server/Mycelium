#pragma once

#include "block.h"

class DeepslateLapisOreBlock : public Block {
 public:
  DeepslateLapisOreBlock();
  ~DeepslateLapisOreBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
