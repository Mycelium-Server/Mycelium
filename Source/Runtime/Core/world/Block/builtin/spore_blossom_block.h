#pragma once

#include "block.h"

class SporeBlossomBlock : public Block {
 public:
  SporeBlossomBlock();
  ~SporeBlossomBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
