#pragma once

#include "block.h"

class NetherGoldOreBlock : public Block {
 public:
  NetherGoldOreBlock();
  ~NetherGoldOreBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
