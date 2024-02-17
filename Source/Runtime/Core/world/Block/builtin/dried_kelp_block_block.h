#pragma once

#include "block.h"

class DriedKelpBlockBlock : public Block {
 public:
  DriedKelpBlockBlock();
  ~DriedKelpBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
