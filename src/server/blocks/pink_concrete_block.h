#pragma once

#include "block.h"

class PinkConcreteBlock : public Block {
 public:
  PinkConcreteBlock();
  ~PinkConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
