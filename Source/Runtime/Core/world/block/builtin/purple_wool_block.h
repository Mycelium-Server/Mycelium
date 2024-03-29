#pragma once

#include "block.h"

class PurpleWoolBlock : public Block {
 public:
  PurpleWoolBlock();
  ~PurpleWoolBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
