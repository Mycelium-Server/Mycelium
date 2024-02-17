
#include "beacon_item.h"

#include "../../block/builtin/beacon_block.h"

BeaconItem::BeaconItem() = default;
BeaconItem::~BeaconItem() = default;

int BeaconItem::getID() const {
  return 348;
}

std::shared_ptr<Item> BeaconItem::clone() const {
  return std::make_shared<BeaconItem>();
}

int BeaconItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BeaconBlock().getId();
}