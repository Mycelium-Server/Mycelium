#pragma once

#include "block.h"

class PolishedAndesiteBlock : public Block {
 public:
  PolishedAndesiteBlock();
  ~PolishedAndesiteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
