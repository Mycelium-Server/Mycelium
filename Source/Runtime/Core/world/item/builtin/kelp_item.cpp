
#include "kelp_item.h"

#include "../../block/builtin/kelp_block.h"

KelpItem::KelpItem() = default;
KelpItem::~KelpItem() = default;

int KelpItem::getID() const {
  return 207;
}

std::shared_ptr<Item> KelpItem::clone() const {
  return std::make_shared<KelpItem>();
}

int KelpItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return KelpBlock().getId();
}