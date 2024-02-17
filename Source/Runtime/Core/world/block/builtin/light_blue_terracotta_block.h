#pragma once

#include "block.h"

class LightBlueTerracottaBlock : public Block {
 public:
  LightBlueTerracottaBlock();
  ~LightBlueTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
