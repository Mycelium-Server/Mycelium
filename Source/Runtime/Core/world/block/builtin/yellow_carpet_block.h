#pragma once

#include "block.h"

class YellowCarpetBlock : public Block {
 public:
  YellowCarpetBlock();
  ~YellowCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
