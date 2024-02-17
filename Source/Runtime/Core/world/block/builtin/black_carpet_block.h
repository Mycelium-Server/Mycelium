#pragma once

#include "block.h"

class BlackCarpetBlock : public Block {
 public:
  BlackCarpetBlock();
  ~BlackCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
