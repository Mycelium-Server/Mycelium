#pragma once

#include "block.h"

class DeepslateGoldOreBlock : public Block {
 public:
  DeepslateGoldOreBlock();
  ~DeepslateGoldOreBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
