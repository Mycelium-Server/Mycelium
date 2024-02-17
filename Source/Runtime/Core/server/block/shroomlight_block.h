#pragma once

#include "block.h"

class ShroomlightBlock : public Block {
 public:
  ShroomlightBlock();
  ~ShroomlightBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
