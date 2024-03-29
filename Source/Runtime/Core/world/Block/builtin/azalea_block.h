#pragma once

#include "block.h"

class AzaleaBlock : public Block {
 public:
  AzaleaBlock();
  ~AzaleaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
