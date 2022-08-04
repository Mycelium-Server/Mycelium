#pragma once

#include "block.h"

class RootedDirtBlock : public Block {
 public:
  RootedDirtBlock();
  ~RootedDirtBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
