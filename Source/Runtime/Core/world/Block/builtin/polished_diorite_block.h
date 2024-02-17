#pragma once

#include "block.h"

class PolishedDioriteBlock : public Block {
 public:
  PolishedDioriteBlock();
  ~PolishedDioriteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
