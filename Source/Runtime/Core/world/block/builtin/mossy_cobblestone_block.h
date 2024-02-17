#pragma once

#include "block.h"

class MossyCobblestoneBlock : public Block {
 public:
  MossyCobblestoneBlock();
  ~MossyCobblestoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
