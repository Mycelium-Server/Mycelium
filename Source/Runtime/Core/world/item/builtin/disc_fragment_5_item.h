#pragma once

#include "item.h"

class DiscFragment5Item : public Item {
 public:
  DiscFragment5Item();
  ~DiscFragment5Item() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
