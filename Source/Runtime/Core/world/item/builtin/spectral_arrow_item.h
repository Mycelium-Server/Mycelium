#pragma once

#include "item.h"

class SpectralArrowItem : public Item {
 public:
  SpectralArrowItem();
  ~SpectralArrowItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
