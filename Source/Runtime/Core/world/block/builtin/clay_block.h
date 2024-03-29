#pragma once

#include "block.h"

class ClayBlock : public Block {
 public:
  ClayBlock();
  ~ClayBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
