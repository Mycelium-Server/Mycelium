#pragma once

#include "item.h"

class MusicDiscCatItem : public Item {
 public:
  MusicDiscCatItem();
  ~MusicDiscCatItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
