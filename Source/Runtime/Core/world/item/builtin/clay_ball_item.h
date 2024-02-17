#pragma once

#include "item.h"

class ClayBallItem : public Item {
 public:
  ClayBallItem();
  ~ClayBallItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
