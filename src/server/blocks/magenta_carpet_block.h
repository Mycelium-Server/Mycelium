#pragma once

#include "block.h"

class MagentaCarpetBlock : public Block {
 public:
  MagentaCarpetBlock();
  ~MagentaCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
