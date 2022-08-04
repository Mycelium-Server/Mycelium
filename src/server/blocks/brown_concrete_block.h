#pragma once

#include "block.h"

class BrownConcreteBlock : public Block {
 public:
  BrownConcreteBlock();
  ~BrownConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
