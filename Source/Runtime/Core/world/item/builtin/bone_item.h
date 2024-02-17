#pragma once

#include "item.h"

class BoneItem : public Item {
 public:
  BoneItem();
  ~BoneItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
