
#include "jack_o_lantern_item.h"

#include "../../block/builtin/jack_o_lantern_block.h"

JackOLanternItem::JackOLanternItem() = default;
JackOLanternItem::~JackOLanternItem() = default;

int JackOLanternItem::getID() const {
  return 279;
}

std::shared_ptr<Item> JackOLanternItem::clone() const {
  return std::make_shared<JackOLanternItem>();
}

int JackOLanternItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JackOLanternBlock().getId();
}