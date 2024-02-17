#pragma once

#include "block.h"

class PurpurBlockBlock : public Block {
 public:
  PurpurBlockBlock();
  ~PurpurBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
