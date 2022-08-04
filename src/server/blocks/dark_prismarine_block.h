#pragma once

#include "block.h"

class DarkPrismarineBlock : public Block {
 public:
  DarkPrismarineBlock();
  ~DarkPrismarineBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
