
#include "polished_blackstone_button_item.h"

#include "../../block/builtin/polished_blackstone_button_block.h"

PolishedBlackstoneButtonItem::PolishedBlackstoneButtonItem() = default;
PolishedBlackstoneButtonItem::~PolishedBlackstoneButtonItem() = default;

int PolishedBlackstoneButtonItem::getID() const {
  return 633;
}

std::shared_ptr<Item> PolishedBlackstoneButtonItem::clone() const {
  return std::make_shared<PolishedBlackstoneButtonItem>();
}

int PolishedBlackstoneButtonItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedBlackstoneButtonBlock().getId();
}