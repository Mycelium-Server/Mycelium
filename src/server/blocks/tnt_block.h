#pragma once

#include "block.h"

class TntBlock : public Block {
 public:
  TntBlock();
  ~TntBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    UNSTABLE_TRUE = 0,
    UNSTABLE_FALSE = 1,
  } unstable = UNSTABLE_FALSE;

};
