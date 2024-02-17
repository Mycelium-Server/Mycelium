#pragma once

#include "block.h"

class DeepslateIronOreBlock : public Block {
 public:
  DeepslateIronOreBlock();
  ~DeepslateIronOreBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
