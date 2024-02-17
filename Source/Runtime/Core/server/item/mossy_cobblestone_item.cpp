
#include "mossy_cobblestone_item.h"

#include "../block/mossy_cobblestone_block.h"

MossyCobblestoneItem::MossyCobblestoneItem() = default;
MossyCobblestoneItem::~MossyCobblestoneItem() = default;

int MossyCobblestoneItem::getID() const {
  return 246;
}

std::shared_ptr<Item> MossyCobblestoneItem::clone() const {
  return std::make_shared<MossyCobblestoneItem>();
}

int MossyCobblestoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MossyCobblestoneBlock().getId();
}