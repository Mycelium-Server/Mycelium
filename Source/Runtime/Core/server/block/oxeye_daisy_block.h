#pragma once

#include "block.h"

class OxeyeDaisyBlock : public Block {
 public:
  OxeyeDaisyBlock();
  ~OxeyeDaisyBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
