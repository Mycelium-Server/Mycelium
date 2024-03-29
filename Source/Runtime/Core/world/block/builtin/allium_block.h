#pragma once

#include "block.h"

class AlliumBlock : public Block {
 public:
  AlliumBlock();
  ~AlliumBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
