
#include "dispenser_item.h"

#include "../../block/builtin/dispenser_block.h"

DispenserItem::DispenserItem() = default;
DispenserItem::~DispenserItem() = default;

int DispenserItem::getID() const {
  return 619;
}

std::shared_ptr<Item> DispenserItem::clone() const {
  return std::make_shared<DispenserItem>();
}

int DispenserItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DispenserBlock().getId();
}