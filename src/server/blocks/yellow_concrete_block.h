#pragma once

#include "block.h"

class YellowConcreteBlock : public Block {
 public:
  YellowConcreteBlock();
  ~YellowConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
