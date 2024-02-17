
#include "infested_stone_item.h"

#include "../../block/builtin/infested_stone_block.h"

InfestedStoneItem::InfestedStoneItem() = default;
InfestedStoneItem::~InfestedStoneItem() = default;

int InfestedStoneItem::getID() const {
  return 288;
}

std::shared_ptr<Item> InfestedStoneItem::clone() const {
  return std::make_shared<InfestedStoneItem>();
}

int InfestedStoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return InfestedStoneBlock().getId();
}