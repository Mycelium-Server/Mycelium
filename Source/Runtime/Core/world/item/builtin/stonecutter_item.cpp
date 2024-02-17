
#include "stonecutter_item.h"

#include "../../block/builtin/stonecutter_block.h"

StonecutterItem::StonecutterItem() = default;
StonecutterItem::~StonecutterItem() = default;

int StonecutterItem::getID() const {
  return 1096;
}

std::shared_ptr<Item> StonecutterItem::clone() const {
  return std::make_shared<StonecutterItem>();
}

int StonecutterItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StonecutterBlock().getId();
}
