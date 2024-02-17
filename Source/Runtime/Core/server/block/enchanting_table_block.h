#pragma once

#include "block.h"

class EnchantingTableBlock : public Block {
 public:
  EnchantingTableBlock();
  ~EnchantingTableBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
