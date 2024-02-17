#pragma once

#include "block.h"

class GreenCarpetBlock : public Block {
 public:
  GreenCarpetBlock();
  ~GreenCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
