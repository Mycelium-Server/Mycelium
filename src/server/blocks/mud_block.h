#pragma once

#include "block.h"

class MudBlock : public Block {
 public:
  MudBlock();
  ~MudBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
