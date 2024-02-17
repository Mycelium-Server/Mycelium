
#include "purple_carpet_item.h"

#include "../../block/builtin/purple_carpet_block.h"

PurpleCarpetItem::PurpleCarpetItem() = default;
PurpleCarpetItem::~PurpleCarpetItem() = default;

int PurpleCarpetItem::getID() const {
  return 408;
}

std::shared_ptr<Item> PurpleCarpetItem::clone() const {
  return std::make_shared<PurpleCarpetItem>();
}

int PurpleCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PurpleCarpetBlock().getId();
}