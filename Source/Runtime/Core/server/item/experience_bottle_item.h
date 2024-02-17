#pragma once

#include "item.h"

class ExperienceBottleItem : public Item {
 public:
  ExperienceBottleItem();
  ~ExperienceBottleItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
