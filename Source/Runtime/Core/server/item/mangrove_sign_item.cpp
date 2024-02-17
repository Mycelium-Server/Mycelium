
#include "mangrove_sign_item.h"

#include "../block/mangrove_sign_block.h"

MangroveSignItem::MangroveSignItem() = default;
MangroveSignItem::~MangroveSignItem() = default;

int MangroveSignItem::getID() const {
  return 810;
}

std::shared_ptr<Item> MangroveSignItem::clone() const {
  return std::make_shared<MangroveSignItem>();
}

int MangroveSignItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MangroveSignBlock().getId();
}