#pragma once

#include "block.h"

class SoulTorchBlock : public Block {
 public:
  SoulTorchBlock();
  ~SoulTorchBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
