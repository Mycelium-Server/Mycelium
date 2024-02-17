#pragma once

#include "block.h"

class EndPortalBlock : public Block {
 public:
  EndPortalBlock();
  ~EndPortalBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
