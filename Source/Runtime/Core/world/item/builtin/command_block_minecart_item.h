#pragma once

#include "item.h"

class CommandBlockMinecartItem : public Item {
 public:
  CommandBlockMinecartItem();
  ~CommandBlockMinecartItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
