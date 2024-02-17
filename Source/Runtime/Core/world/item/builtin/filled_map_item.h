#pragma once

#include "item.h"

class FilledMapItem : public Item {
 public:
  FilledMapItem();
  ~FilledMapItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
