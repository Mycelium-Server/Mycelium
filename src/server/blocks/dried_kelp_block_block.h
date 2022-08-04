#pragma once

#include "block.h"

class DriedKelpBlockBlock : public Block {
 public:
  DriedKelpBlockBlock();
  ~DriedKelpBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
