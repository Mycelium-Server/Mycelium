#pragma once

#include "item.h"

class MusicDiscChirpItem : public Item {
 public:
  MusicDiscChirpItem();
  ~MusicDiscChirpItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
};
