#pragma once

#include "item.h"

class MusicDisc5Item : public Item {
 public:
  MusicDisc5Item();
  ~MusicDisc5Item() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
