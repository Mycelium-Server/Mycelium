#pragma once

#include "item.h"

class NetherWartItem : public Item {
 public:
  NetherWartItem();
  ~NetherWartItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
