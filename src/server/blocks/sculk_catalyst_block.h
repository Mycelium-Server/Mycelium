#pragma once

#include "block.h"

class SculkCatalystBlock : public Block {
 public:
  SculkCatalystBlock();
  ~SculkCatalystBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    BLOOM_TRUE = 0,
    BLOOM_FALSE = 1,
  } bloom = BLOOM_FALSE;

};
