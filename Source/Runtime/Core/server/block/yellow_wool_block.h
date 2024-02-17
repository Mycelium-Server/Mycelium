#pragma once

#include "block.h"

class YellowWoolBlock : public Block {
 public:
  YellowWoolBlock();
  ~YellowWoolBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
