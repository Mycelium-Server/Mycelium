
#include "andesite_stairs_item.h"

#include "../../block/builtin/andesite_stairs_block.h"

AndesiteStairsItem::AndesiteStairsItem() = default;
AndesiteStairsItem::~AndesiteStairsItem() = default;

int AndesiteStairsItem::getID() const {
  return 582;
}

std::shared_ptr<Item> AndesiteStairsItem::clone() const {
  return std::make_shared<AndesiteStairsItem>();
}

int AndesiteStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AndesiteStairsBlock().getId();
}