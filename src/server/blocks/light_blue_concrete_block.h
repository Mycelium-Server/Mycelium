#pragma once

#include "block.h"

class LightBlueConcreteBlock : public Block {
 public:
  LightBlueConcreteBlock();
  ~LightBlueConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
