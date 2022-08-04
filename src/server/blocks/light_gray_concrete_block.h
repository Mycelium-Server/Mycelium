#pragma once

#include "block.h"

class LightGrayConcreteBlock : public Block {
 public:
  LightGrayConcreteBlock();
  ~LightGrayConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
