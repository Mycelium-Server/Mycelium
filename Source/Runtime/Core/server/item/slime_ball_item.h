#pragma once

#include "item.h"

class SlimeBallItem : public Item {
 public:
  SlimeBallItem();
  ~SlimeBallItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
