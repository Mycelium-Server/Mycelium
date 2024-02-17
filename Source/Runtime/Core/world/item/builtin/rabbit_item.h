#pragma once

#include "item.h"

class RabbitItem : public Item {
 public:
  RabbitItem();
  ~RabbitItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
