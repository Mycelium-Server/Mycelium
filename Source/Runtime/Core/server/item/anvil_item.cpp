
#include "anvil_item.h"

#include "../block/anvil_block.h"

AnvilItem::AnvilItem() = default;
AnvilItem::~AnvilItem() = default;

int AnvilItem::getID() const {
  return 371;
}

std::shared_ptr<Item> AnvilItem::clone() const {
  return std::make_shared<AnvilItem>();
}

int AnvilItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AnvilBlock().getId();
}
