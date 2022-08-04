#pragma once

#include "block.h"

class CornflowerBlock : public Block {
 public:
  CornflowerBlock();
  ~CornflowerBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
