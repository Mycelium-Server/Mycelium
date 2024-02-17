
#include "oak_sign_item.h"

#include "../../block/builtin/oak_sign_block.h"

OakSignItem::OakSignItem() = default;
OakSignItem::~OakSignItem() = default;

int OakSignItem::getID() const {
  return 804;
}

std::shared_ptr<Item> OakSignItem::clone() const {
  return std::make_shared<OakSignItem>();
}

int OakSignItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OakSignBlock().getId();
}