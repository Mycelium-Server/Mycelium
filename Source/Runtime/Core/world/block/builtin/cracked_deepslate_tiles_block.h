#pragma once

#include "block.h"

class CrackedDeepslateTilesBlock : public Block {
 public:
  CrackedDeepslateTilesBlock();
  ~CrackedDeepslateTilesBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
