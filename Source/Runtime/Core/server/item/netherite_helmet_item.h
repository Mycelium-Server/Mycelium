#pragma once

#include "item.h"

class NetheriteHelmetItem : public Item {
 public:
  NetheriteHelmetItem();
  ~NetheriteHelmetItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
