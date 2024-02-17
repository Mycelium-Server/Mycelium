#pragma once

#include "item.h"

class RabbitHideItem : public Item {
 public:
  RabbitHideItem();
  ~RabbitHideItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
