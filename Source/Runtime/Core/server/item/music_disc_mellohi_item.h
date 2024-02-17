#pragma once

#include "item.h"

class MusicDiscMellohiItem : public Item {
 public:
  MusicDiscMellohiItem();
  ~MusicDiscMellohiItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
