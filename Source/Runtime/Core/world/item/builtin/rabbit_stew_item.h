#pragma once

#include "item.h"

class RabbitStewItem : public Item {
 public:
  RabbitStewItem();
  ~RabbitStewItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
