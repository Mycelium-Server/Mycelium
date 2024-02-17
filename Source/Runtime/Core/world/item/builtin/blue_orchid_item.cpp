
#include "blue_orchid_item.h"

#include "../../block/builtin/blue_orchid_block.h"

BlueOrchidItem::BlueOrchidItem() = default;
BlueOrchidItem::~BlueOrchidItem() = default;

int BlueOrchidItem::getID() const {
  return 185;
}

std::shared_ptr<Item> BlueOrchidItem::clone() const {
  return std::make_shared<BlueOrchidItem>();
}

int BlueOrchidItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlueOrchidBlock().getId();
}
