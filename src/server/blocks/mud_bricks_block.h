#pragma once

#include "block.h"

class MudBricksBlock : public Block {
 public:
  MudBricksBlock();
  ~MudBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
