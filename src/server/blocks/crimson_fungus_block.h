#pragma once

#include "block.h"

class CrimsonFungusBlock : public Block {
 public:
  CrimsonFungusBlock();
  ~CrimsonFungusBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
