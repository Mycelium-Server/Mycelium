#pragma once

#include "item.h"

class RabbitFootItem : public Item {
 public:
  RabbitFootItem();
  ~RabbitFootItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
