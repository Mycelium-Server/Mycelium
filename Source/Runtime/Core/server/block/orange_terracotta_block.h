#pragma once

#include "block.h"

class OrangeTerracottaBlock : public Block {
 public:
  OrangeTerracottaBlock();
  ~OrangeTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
