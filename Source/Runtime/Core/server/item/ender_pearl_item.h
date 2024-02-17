#pragma once

#include "item.h"

class EnderPearlItem : public Item {
 public:
  EnderPearlItem();
  ~EnderPearlItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
