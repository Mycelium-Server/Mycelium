#pragma once

#include "block.h"

class ObsidianBlock : public Block {
 public:
  ObsidianBlock();
  ~ObsidianBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
