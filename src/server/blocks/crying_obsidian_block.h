#pragma once

#include "block.h"

class CryingObsidianBlock : public Block {
 public:
  CryingObsidianBlock();
  ~CryingObsidianBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
