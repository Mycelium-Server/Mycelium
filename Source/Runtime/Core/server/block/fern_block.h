#pragma once

#include "block.h"

class FernBlock : public Block {
 public:
  FernBlock();
  ~FernBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
