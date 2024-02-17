#pragma once

#include "block.h"

class DeepslateBricksBlock : public Block {
 public:
  DeepslateBricksBlock();
  ~DeepslateBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
