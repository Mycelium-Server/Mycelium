#pragma once

#include "block.h"

class ChiseledRedSandstoneBlock : public Block {
 public:
  ChiseledRedSandstoneBlock();
  ~ChiseledRedSandstoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
