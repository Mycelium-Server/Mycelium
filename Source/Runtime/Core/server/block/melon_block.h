#pragma once

#include "block.h"

class MelonBlock : public Block {
 public:
  MelonBlock();
  ~MelonBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
