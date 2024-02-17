
#include "frogspawn_item.h"

#include "../block/frogspawn_block.h"

FrogspawnItem::FrogspawnItem() = default;
FrogspawnItem::~FrogspawnItem() = default;

int FrogspawnItem::getID() const {
  return 1150;
}

std::shared_ptr<Item> FrogspawnItem::clone() const {
  return std::make_shared<FrogspawnItem>();
}

int FrogspawnItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return FrogspawnBlock().getId();
}