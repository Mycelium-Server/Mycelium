#pragma once

#include "item.h"

class MusicDiscPigstepItem : public Item {
 public:
  MusicDiscPigstepItem();
  ~MusicDiscPigstepItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
