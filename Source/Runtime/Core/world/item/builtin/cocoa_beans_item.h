#pragma once

#include "item.h"

class CocoaBeansItem : public Item {
 public:
  CocoaBeansItem();
  ~CocoaBeansItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
