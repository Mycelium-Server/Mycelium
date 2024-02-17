#pragma once

#include "block.h"

class CyanTerracottaBlock : public Block {
 public:
  CyanTerracottaBlock();
  ~CyanTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
