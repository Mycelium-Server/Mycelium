
#include "end_rod_item.h"

#include "../block/end_rod_block.h"

EndRodItem::EndRodItem() = default;
EndRodItem::~EndRodItem() = default;

int EndRodItem::getID() const {
  return 249;
}

std::shared_ptr<Item> EndRodItem::clone() const {
  return std::make_shared<EndRodItem>();
}

int EndRodItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return EndRodBlock().getId();
}
