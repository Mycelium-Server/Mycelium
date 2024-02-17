#pragma once

#include "item.h"

class RecoveryCompassItem : public Item {
 public:
  RecoveryCompassItem();
  ~RecoveryCompassItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
