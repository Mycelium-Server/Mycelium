
#include "mangrove_stairs_item.h"

#include "../../block/builtin/mangrove_stairs_block.h"

MangroveStairsItem::MangroveStairsItem() = default;
MangroveStairsItem::~MangroveStairsItem() = default;

int MangroveStairsItem::getID() const {
  return 344;
}

std::shared_ptr<Item> MangroveStairsItem::clone() const {
  return std::make_shared<MangroveStairsItem>();
}

int MangroveStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MangroveStairsBlock().getId();
}
