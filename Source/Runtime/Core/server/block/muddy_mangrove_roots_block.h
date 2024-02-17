#pragma once

#include "block.h"

class MuddyMangroveRootsBlock : public Block {
 public:
  MuddyMangroveRootsBlock();
  ~MuddyMangroveRootsBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    AXIS_X = 0,
    AXIS_Y = 1,
    AXIS_Z = 2,
  } axis = AXIS_Y;

};
