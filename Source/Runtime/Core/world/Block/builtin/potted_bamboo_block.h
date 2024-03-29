#pragma once

#include "block.h"

class PottedBambooBlock : public Block {
 public:
  PottedBambooBlock();
  ~PottedBambooBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
