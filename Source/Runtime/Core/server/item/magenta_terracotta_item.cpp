
#include "magenta_terracotta_item.h"

#include "../block/magenta_terracotta_block.h"

MagentaTerracottaItem::MagentaTerracottaItem() = default;
MagentaTerracottaItem::~MagentaTerracottaItem() = default;

int MagentaTerracottaItem::getID() const {
  return 381;
}

std::shared_ptr<Item> MagentaTerracottaItem::clone() const {
  return std::make_shared<MagentaTerracottaItem>();
}

int MagentaTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MagentaTerracottaBlock().getId();
}