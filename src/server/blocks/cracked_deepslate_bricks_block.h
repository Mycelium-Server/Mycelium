#pragma once

#include "block.h"

class CrackedDeepslateBricksBlock : public Block {
 public:
  CrackedDeepslateBricksBlock();
  ~CrackedDeepslateBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
