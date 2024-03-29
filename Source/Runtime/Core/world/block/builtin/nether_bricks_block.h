#pragma once

#include "block.h"

class NetherBricksBlock : public Block {
 public:
  NetherBricksBlock();
  ~NetherBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
