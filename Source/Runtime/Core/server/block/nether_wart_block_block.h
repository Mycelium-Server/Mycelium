#pragma once

#include "block.h"

class NetherWartBlockBlock : public Block {
 public:
  NetherWartBlockBlock();
  ~NetherWartBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
