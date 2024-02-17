#pragma once

#include "item.h"

class PhantomMembraneItem : public Item {
 public:
  PhantomMembraneItem();
  ~PhantomMembraneItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
