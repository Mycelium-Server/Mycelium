#pragma once

#include "block.h"

class BlueWoolBlock : public Block {
 public:
  BlueWoolBlock();
  ~BlueWoolBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
