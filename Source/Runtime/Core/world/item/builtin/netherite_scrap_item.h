#pragma once

#include "item.h"

class NetheriteScrapItem : public Item {
 public:
  NetheriteScrapItem();
  ~NetheriteScrapItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
