
#include "peony_item.h"

#include "../../block/builtin/peony_block.h"

PeonyItem::PeonyItem() = default;
PeonyItem::~PeonyItem() = default;

int PeonyItem::getID() const {
  return 420;
}

std::shared_ptr<Item> PeonyItem::clone() const {
  return std::make_shared<PeonyItem>();
}

int PeonyItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PeonyBlock().getId();
}