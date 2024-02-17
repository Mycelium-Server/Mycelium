
#include "cobweb_item.h"

#include "../../block/builtin/cobweb_block.h"

CobwebItem::CobwebItem() = default;
CobwebItem::~CobwebItem() = default;

int CobwebItem::getID() const {
  return 159;
}

std::shared_ptr<Item> CobwebItem::clone() const {
  return std::make_shared<CobwebItem>();
}

int CobwebItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CobwebBlock().getId();
}