#pragma once

#include "item.h"

class ScuteItem : public Item {
 public:
  ScuteItem();
  ~ScuteItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
