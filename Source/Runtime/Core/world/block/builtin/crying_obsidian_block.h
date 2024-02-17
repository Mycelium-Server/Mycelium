#pragma once

#include "block.h"

class CryingObsidianBlock : public Block {
 public:
  CryingObsidianBlock();
  ~CryingObsidianBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
