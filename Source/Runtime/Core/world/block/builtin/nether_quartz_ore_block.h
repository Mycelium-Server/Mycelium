#pragma once

#include "block.h"

class NetherQuartzOreBlock : public Block {
 public:
  NetherQuartzOreBlock();
  ~NetherQuartzOreBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
