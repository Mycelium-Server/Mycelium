#pragma once

#include "block.h"

class MagentaConcreteBlock : public Block {
 public:
  MagentaConcreteBlock();
  ~MagentaConcreteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
