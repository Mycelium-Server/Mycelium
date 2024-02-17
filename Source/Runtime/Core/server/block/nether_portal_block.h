#pragma once

#include "block.h"

class NetherPortalBlock : public Block {
 public:
  NetherPortalBlock();
  ~NetherPortalBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    AXIS_X = 0,
    AXIS_Z = 1,
  } axis = AXIS_X;

};
