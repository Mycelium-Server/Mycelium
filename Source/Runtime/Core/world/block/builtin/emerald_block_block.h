#pragma once

#include "block.h"

class EmeraldBlockBlock : public Block {
 public:
  EmeraldBlockBlock();
  ~EmeraldBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
