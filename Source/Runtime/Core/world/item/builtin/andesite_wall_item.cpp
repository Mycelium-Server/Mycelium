
#include "andesite_wall_item.h"

#include "../../block/builtin/andesite_wall_block.h"

AndesiteWallItem::AndesiteWallItem() = default;
AndesiteWallItem::~AndesiteWallItem() = default;

int AndesiteWallItem::getID() const {
  return 359;
}

std::shared_ptr<Item> AndesiteWallItem::clone() const {
  return std::make_shared<AndesiteWallItem>();
}

int AndesiteWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AndesiteWallBlock().getId();
}