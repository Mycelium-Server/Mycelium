#pragma once

#include "block.h"

class BeaconBlock : public Block {
 public:
  BeaconBlock();
  ~BeaconBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
