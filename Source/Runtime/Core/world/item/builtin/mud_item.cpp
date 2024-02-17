
#include "mud_item.h"

#include "../../block/builtin/mud_block.h"

MudItem::MudItem() = default;
MudItem::~MudItem() = default;

int MudItem::getID() const {
  return 19;
}

std::shared_ptr<Item> MudItem::clone() const {
  return std::make_shared<MudItem>();
}

int MudItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MudBlock().getId();
}
