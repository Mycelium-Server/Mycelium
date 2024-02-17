#pragma once

#include "block.h"

class CrackedNetherBricksBlock : public Block {
 public:
  CrackedNetherBricksBlock();
  ~CrackedNetherBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
