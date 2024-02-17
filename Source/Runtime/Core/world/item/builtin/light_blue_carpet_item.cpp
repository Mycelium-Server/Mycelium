
#include "light_blue_carpet_item.h"

#include "../../block/builtin/light_blue_carpet_block.h"

LightBlueCarpetItem::LightBlueCarpetItem() = default;
LightBlueCarpetItem::~LightBlueCarpetItem() = default;

int LightBlueCarpetItem::getID() const {
  return 401;
}

std::shared_ptr<Item> LightBlueCarpetItem::clone() const {
  return std::make_shared<LightBlueCarpetItem>();
}

int LightBlueCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightBlueCarpetBlock().getId();
}
