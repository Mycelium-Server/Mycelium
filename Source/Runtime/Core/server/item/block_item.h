#pragma once

#include "../face.h"
#include "../world/world.h"
#include "item.h"

class BlockItem : public Item {
 public:
  BlockItem();
  ~BlockItem() override;

 public:
  [[nodiscard]] virtual int getBlockID(World*, const Vector3i&, const Vector3f&, const BlockFace&, const Vector3f&, bool) const = 0;
  [[nodiscard]] virtual int getBlockID(World*, const Vector3i&) const;
  [[nodiscard]] bool isBlockItem() const override;
};
