#pragma once

#include "block.h"

class AndesiteBlock : public Block {
 public:
  AndesiteBlock();
  ~AndesiteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
