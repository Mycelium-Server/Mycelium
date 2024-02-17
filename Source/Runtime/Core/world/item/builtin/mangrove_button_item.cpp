
#include "mangrove_button_item.h"

#include "../../block/builtin/mangrove_button_block.h"

MangroveButtonItem::MangroveButtonItem() = default;
MangroveButtonItem::~MangroveButtonItem() = default;

int MangroveButtonItem::getID() const {
  return 640;
}

std::shared_ptr<Item> MangroveButtonItem::clone() const {
  return std::make_shared<MangroveButtonItem>();
}

int MangroveButtonItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MangroveButtonBlock().getId();
}