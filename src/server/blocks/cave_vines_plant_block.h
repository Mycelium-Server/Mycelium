#pragma once

#include "block.h"

class CaveVinesPlantBlock : public Block {
 public:
  CaveVinesPlantBlock();
  ~CaveVinesPlantBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    BERRIES_TRUE = 0,
    BERRIES_FALSE = 1,
  } berries = BERRIES_FALSE;

};
