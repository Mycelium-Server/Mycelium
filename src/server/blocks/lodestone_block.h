#pragma once

#include "block.h"

class LodestoneBlock : public Block {
 public:
  LodestoneBlock();
  ~LodestoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
