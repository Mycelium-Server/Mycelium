#pragma once

#include "block.h"

class FletchingTableBlock : public Block {
 public:
  FletchingTableBlock();
  ~FletchingTableBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
