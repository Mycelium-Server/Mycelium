
#include "seagrass_item.h"

#include "../../block/builtin/seagrass_block.h"

SeagrassItem::SeagrassItem() = default;
SeagrassItem::~SeagrassItem() = default;

int SeagrassItem::getID() const {
  return 165;
}

std::shared_ptr<Item> SeagrassItem::clone() const {
  return std::make_shared<SeagrassItem>();
}

int SeagrassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SeagrassBlock().getId();
}