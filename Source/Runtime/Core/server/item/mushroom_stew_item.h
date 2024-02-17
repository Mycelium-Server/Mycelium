#pragma once

#include "item.h"

class MushroomStewItem : public Item {
 public:
  MushroomStewItem();
  ~MushroomStewItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
