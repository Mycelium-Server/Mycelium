#pragma once

#include "block.h"

class CopperOreBlock : public Block {
 public:
  CopperOreBlock();
  ~CopperOreBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
