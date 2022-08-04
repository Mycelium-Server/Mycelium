#pragma once

#include "block.h"

class PinkWoolBlock : public Block {
 public:
  PinkWoolBlock();
  ~PinkWoolBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
