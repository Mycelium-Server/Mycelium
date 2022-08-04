#pragma once

#include "block.h"

class InfestedCobblestoneBlock : public Block {
 public:
  InfestedCobblestoneBlock();
  ~InfestedCobblestoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
