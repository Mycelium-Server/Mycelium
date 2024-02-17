
#include "sugar_cane_item.h"

#include "../../block/builtin/sugar_cane_block.h"

SugarCaneItem::SugarCaneItem() = default;
SugarCaneItem::~SugarCaneItem() = default;

int SugarCaneItem::getID() const {
  return 206;
}

std::shared_ptr<Item> SugarCaneItem::clone() const {
  return std::make_shared<SugarCaneItem>();
}

int SugarCaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SugarCaneBlock().getId();
}
