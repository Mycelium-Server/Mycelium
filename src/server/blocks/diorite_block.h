#pragma once

#include "block.h"

class DioriteBlock : public Block {
 public:
  DioriteBlock();
  ~DioriteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
