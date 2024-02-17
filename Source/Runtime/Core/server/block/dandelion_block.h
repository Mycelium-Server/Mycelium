#pragma once

#include "block.h"

class DandelionBlock : public Block {
 public:
  DandelionBlock();
  ~DandelionBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
