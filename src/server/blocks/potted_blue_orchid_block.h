#pragma once

#include "block.h"

class PottedBlueOrchidBlock : public Block {
 public:
  PottedBlueOrchidBlock();
  ~PottedBlueOrchidBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
