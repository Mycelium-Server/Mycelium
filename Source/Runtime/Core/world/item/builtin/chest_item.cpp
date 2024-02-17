
#include "chest_item.h"

#include "../../block/builtin/chest_block.h"

ChestItem::ChestItem() = default;
ChestItem::~ChestItem() = default;

int ChestItem::getID() const {
  return 256;
}

std::shared_ptr<Item> ChestItem::clone() const {
  return std::make_shared<ChestItem>();
}

int ChestItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ChestBlock().getId();
}