#pragma once

#include "block.h"

class WhiteWoolBlock : public Block {
 public:
  WhiteWoolBlock();
  ~WhiteWoolBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
