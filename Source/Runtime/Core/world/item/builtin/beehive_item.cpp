
#include "beehive_item.h"

#include "../../block/builtin/beehive_block.h"

BeehiveItem::BeehiveItem() = default;
BeehiveItem::~BeehiveItem() = default;

int BeehiveItem::getID() const {
  return 1107;
}

std::shared_ptr<Item> BeehiveItem::clone() const {
  return std::make_shared<BeehiveItem>();
}

int BeehiveItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BeehiveBlock().getId();
}