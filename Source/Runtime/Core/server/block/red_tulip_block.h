#pragma once

#include "block.h"

class RedTulipBlock : public Block {
 public:
  RedTulipBlock();
  ~RedTulipBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
