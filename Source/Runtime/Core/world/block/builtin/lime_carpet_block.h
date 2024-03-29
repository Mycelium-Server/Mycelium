#pragma once

#include "block.h"

class LimeCarpetBlock : public Block {
 public:
  LimeCarpetBlock();
  ~LimeCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
