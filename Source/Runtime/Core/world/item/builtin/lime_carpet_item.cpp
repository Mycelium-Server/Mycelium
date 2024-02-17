
#include "lime_carpet_item.h"

#include "../../block/builtin/lime_carpet_block.h"

LimeCarpetItem::LimeCarpetItem() = default;
LimeCarpetItem::~LimeCarpetItem() = default;

int LimeCarpetItem::getID() const {
  return 403;
}

std::shared_ptr<Item> LimeCarpetItem::clone() const {
  return std::make_shared<LimeCarpetItem>();
}

int LimeCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LimeCarpetBlock().getId();
}