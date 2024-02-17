
#include "jungle_sign_item.h"

#include "../../block/builtin/jungle_sign_block.h"

JungleSignItem::JungleSignItem() = default;
JungleSignItem::~JungleSignItem() = default;

int JungleSignItem::getID() const {
  return 807;
}

std::shared_ptr<Item> JungleSignItem::clone() const {
  return std::make_shared<JungleSignItem>();
}

int JungleSignItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JungleSignBlock().getId();
}