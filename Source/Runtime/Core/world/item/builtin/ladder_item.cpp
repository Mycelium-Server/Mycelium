
#include "ladder_item.h"

#include "../../block/builtin/ladder_block.h"

LadderItem::LadderItem() = default;
LadderItem::~LadderItem() = default;

int LadderItem::getID() const {
  return 260;
}

std::shared_ptr<Item> LadderItem::clone() const {
  return std::make_shared<LadderItem>();
}

int LadderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LadderBlock().getId();
}