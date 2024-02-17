#pragma once

#include "block.h"

class HornCoralBlockBlock : public Block {
 public:
  HornCoralBlockBlock();
  ~HornCoralBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
