
#include "mossy_cobblestone_wall_item.h"

#include "../../block/builtin/mossy_cobblestone_wall_block.h"

MossyCobblestoneWallItem::MossyCobblestoneWallItem() = default;
MossyCobblestoneWallItem::~MossyCobblestoneWallItem() = default;

int MossyCobblestoneWallItem::getID() const {
  return 350;
}

std::shared_ptr<Item> MossyCobblestoneWallItem::clone() const {
  return std::make_shared<MossyCobblestoneWallItem>();
}

int MossyCobblestoneWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MossyCobblestoneWallBlock().getId();
}