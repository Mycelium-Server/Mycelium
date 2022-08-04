#pragma once

#include "block.h"

class ShroomlightBlock : public Block {
 public:
  ShroomlightBlock();
  ~ShroomlightBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
