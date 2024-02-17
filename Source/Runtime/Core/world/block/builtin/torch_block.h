#pragma once

#include "block.h"

class TorchBlock : public Block {
 public:
  TorchBlock();
  ~TorchBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
