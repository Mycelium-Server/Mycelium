#pragma once

#include "block.h"

class PolishedGraniteBlock : public Block {
 public:
  PolishedGraniteBlock();
  ~PolishedGraniteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
