
#include "melon_item.h"

#include "../../block/builtin/melon_block.h"

MelonItem::MelonItem() = default;
MelonItem::~MelonItem() = default;

int MelonItem::getID() const {
  return 313;
}

std::shared_ptr<Item> MelonItem::clone() const {
  return std::make_shared<MelonItem>();
}

int MelonItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MelonBlock().getId();
}