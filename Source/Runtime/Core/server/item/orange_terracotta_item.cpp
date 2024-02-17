
#include "orange_terracotta_item.h"

#include "../block/orange_terracotta_block.h"

OrangeTerracottaItem::OrangeTerracottaItem() = default;
OrangeTerracottaItem::~OrangeTerracottaItem() = default;

int OrangeTerracottaItem::getID() const {
  return 380;
}

std::shared_ptr<Item> OrangeTerracottaItem::clone() const {
  return std::make_shared<OrangeTerracottaItem>();
}

int OrangeTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OrangeTerracottaBlock().getId();
}
