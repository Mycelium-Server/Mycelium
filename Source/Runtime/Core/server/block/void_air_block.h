#pragma once

#include "block.h"

class VoidAirBlock : public Block {
 public:
  VoidAirBlock();
  ~VoidAirBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
