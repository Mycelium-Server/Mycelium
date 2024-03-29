#pragma once

#include "block.h"

class AncientDebrisBlock : public Block {
 public:
  AncientDebrisBlock();
  ~AncientDebrisBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
