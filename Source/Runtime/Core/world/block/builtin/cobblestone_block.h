#pragma once

#include "block.h"

class CobblestoneBlock : public Block {
 public:
  CobblestoneBlock();
  ~CobblestoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
