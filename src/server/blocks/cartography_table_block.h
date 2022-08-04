#pragma once

#include "block.h"

class CartographyTableBlock : public Block {
 public:
  CartographyTableBlock();
  ~CartographyTableBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
