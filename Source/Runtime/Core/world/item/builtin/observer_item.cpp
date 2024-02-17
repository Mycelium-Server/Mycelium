
#include "observer_item.h"

#include "../../block/builtin/observer_block.h"

ObserverItem::ObserverItem() = default;
ObserverItem::~ObserverItem() = default;

int ObserverItem::getID() const {
  return 617;
}

std::shared_ptr<Item> ObserverItem::clone() const {
  return std::make_shared<ObserverItem>();
}

int ObserverItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ObserverBlock().getId();
}