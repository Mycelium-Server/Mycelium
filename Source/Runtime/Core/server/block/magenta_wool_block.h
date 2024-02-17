#pragma once

#include "block.h"

class MagentaWoolBlock : public Block {
 public:
  MagentaWoolBlock();
  ~MagentaWoolBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
