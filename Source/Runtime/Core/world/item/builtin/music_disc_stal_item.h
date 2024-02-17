#pragma once

#include "item.h"

class MusicDiscStalItem : public Item {
 public:
  MusicDiscStalItem();
  ~MusicDiscStalItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
