#pragma once

#include "block_item.h"

class PurpleBedItem : public BlockItem {
 public:
  PurpleBedItem();
  ~PurpleBedItem() override;

 public:
  [[nodiscard]] int getID() const override;
  [[nodiscard]] std::shared_ptr<Item> clone() const override;
  [[nodiscard]] int getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const override;
};
