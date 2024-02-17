#pragma once

#include "block.h"

class OrangeWoolBlock : public Block {
 public:
  OrangeWoolBlock();
  ~OrangeWoolBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
