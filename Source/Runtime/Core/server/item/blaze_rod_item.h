#pragma once

#include "item.h"

class BlazeRodItem : public Item {
 public:
  BlazeRodItem();
  ~BlazeRodItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
