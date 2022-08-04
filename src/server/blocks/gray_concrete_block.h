#pragma once

#include "block.h"

class GrayConcreteBlock : public Block {
 public:
  GrayConcreteBlock();
  ~GrayConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
