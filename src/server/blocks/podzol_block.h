#pragma once

#include "block.h"

class PodzolBlock : public Block {
 public:
  PodzolBlock();
  ~PodzolBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    SNOWY_TRUE = 0,
    SNOWY_FALSE = 1,
  } snowy = SNOWY_FALSE;

};
