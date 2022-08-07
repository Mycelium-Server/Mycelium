#pragma once

#include "block.h"

class BlueOrchidBlock : public Block {
 public:
  BlueOrchidBlock();
  ~BlueOrchidBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
