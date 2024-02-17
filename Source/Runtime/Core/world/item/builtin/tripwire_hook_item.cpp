
#include "tripwire_hook_item.h"

#include "../../block/builtin/tripwire_hook_block.h"

TripwireHookItem::TripwireHookItem() = default;
TripwireHookItem::~TripwireHookItem() = default;

int TripwireHookItem::getID() const {
  return 627;
}

std::shared_ptr<Item> TripwireHookItem::clone() const {
  return std::make_shared<TripwireHookItem>();
}

int TripwireHookItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return TripwireHookBlock().getId();
}