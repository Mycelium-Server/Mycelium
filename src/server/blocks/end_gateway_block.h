#pragma once

#include "block.h"

class EndGatewayBlock : public Block {
 public:
  EndGatewayBlock();
  ~EndGatewayBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
