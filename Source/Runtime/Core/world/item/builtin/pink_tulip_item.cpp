
#include "pink_tulip_item.h"

#include "../../block/builtin/pink_tulip_block.h"

PinkTulipItem::PinkTulipItem() = default;
PinkTulipItem::~PinkTulipItem() = default;

int PinkTulipItem::getID() const {
  return 191;
}

std::shared_ptr<Item> PinkTulipItem::clone() const {
  return std::make_shared<PinkTulipItem>();
}

int PinkTulipItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PinkTulipBlock().getId();
}