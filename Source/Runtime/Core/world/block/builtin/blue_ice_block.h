#pragma once

#include "block.h"

class BlueIceBlock : public Block {
 public:
  BlueIceBlock();
  ~BlueIceBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
