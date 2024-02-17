
#include "sea_lantern_item.h"

#include "../../block/builtin/sea_lantern_block.h"

SeaLanternItem::SeaLanternItem() = default;
SeaLanternItem::~SeaLanternItem() = default;

int SeaLanternItem::getID() const {
  return 461;
}

std::shared_ptr<Item> SeaLanternItem::clone() const {
  return std::make_shared<SeaLanternItem>();
}

int SeaLanternItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SeaLanternBlock().getId();
}