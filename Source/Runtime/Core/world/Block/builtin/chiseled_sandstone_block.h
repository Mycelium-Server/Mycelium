#pragma once

#include "block.h"

class ChiseledSandstoneBlock : public Block {
 public:
  ChiseledSandstoneBlock();
  ~ChiseledSandstoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
