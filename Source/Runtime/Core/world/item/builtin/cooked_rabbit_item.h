#pragma once

#include "item.h"

class CookedRabbitItem : public Item {
 public:
  CookedRabbitItem();
  ~CookedRabbitItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
