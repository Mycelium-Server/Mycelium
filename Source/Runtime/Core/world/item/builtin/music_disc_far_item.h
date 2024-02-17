#pragma once

#include "item.h"

class MusicDiscFarItem : public Item {
 public:
  MusicDiscFarItem();
  ~MusicDiscFarItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
