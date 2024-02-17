
#include "chipped_anvil_item.h"

#include "../../block/builtin/chipped_anvil_block.h"

ChippedAnvilItem::ChippedAnvilItem() = default;
ChippedAnvilItem::~ChippedAnvilItem() = default;

int ChippedAnvilItem::getID() const {
  return 372;
}

std::shared_ptr<Item> ChippedAnvilItem::clone() const {
  return std::make_shared<ChippedAnvilItem>();
}

int ChippedAnvilItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ChippedAnvilBlock().getId();
}