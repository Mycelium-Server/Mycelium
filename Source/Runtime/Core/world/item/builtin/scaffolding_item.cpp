
#include "scaffolding_item.h"

#include "../../block/builtin/scaffolding_block.h"

ScaffoldingItem::ScaffoldingItem() = default;
ScaffoldingItem::~ScaffoldingItem() = default;

int ScaffoldingItem::getID() const {
  return 607;
}

std::shared_ptr<Item> ScaffoldingItem::clone() const {
  return std::make_shared<ScaffoldingItem>();
}

int ScaffoldingItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ScaffoldingBlock().getId();
}
