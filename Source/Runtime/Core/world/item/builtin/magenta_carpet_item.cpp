
#include "magenta_carpet_item.h"

#include "../../block/builtin/magenta_carpet_block.h"

MagentaCarpetItem::MagentaCarpetItem() = default;
MagentaCarpetItem::~MagentaCarpetItem() = default;

int MagentaCarpetItem::getID() const {
  return 400;
}

std::shared_ptr<Item> MagentaCarpetItem::clone() const {
  return std::make_shared<MagentaCarpetItem>();
}

int MagentaCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MagentaCarpetBlock().getId();
}