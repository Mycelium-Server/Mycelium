
#include "respawn_anchor_item.h"

#include "../../block/builtin/respawn_anchor_block.h"

RespawnAnchorItem::RespawnAnchorItem() = default;
RespawnAnchorItem::~RespawnAnchorItem() = default;

int RespawnAnchorItem::getID() const {
  return 1124;
}

std::shared_ptr<Item> RespawnAnchorItem::clone() const {
  return std::make_shared<RespawnAnchorItem>();
}

int RespawnAnchorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RespawnAnchorBlock().getId();
}