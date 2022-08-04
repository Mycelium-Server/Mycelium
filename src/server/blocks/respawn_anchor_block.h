#pragma once

#include "block.h"

class RespawnAnchorBlock : public Block {
 public:
  RespawnAnchorBlock();
  ~RespawnAnchorBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    CHARGES_0 = 0,
    CHARGES_1 = 1,
    CHARGES_2 = 2,
    CHARGES_3 = 3,
    CHARGES_4 = 4,
  } charges = CHARGES_0;

};
