#pragma once

#include "item.h"

class MusicDiscMallItem : public Item {
 public:
  MusicDiscMallItem();
  ~MusicDiscMallItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
