#pragma once

#include "block.h"

class StrippedMangroveLogBlock : public Block {
 public:
  StrippedMangroveLogBlock();
  ~StrippedMangroveLogBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    AXIS_X = 0,
    AXIS_Y = 1,
    AXIS_Z = 2,
  } axis = AXIS_Y;

};
