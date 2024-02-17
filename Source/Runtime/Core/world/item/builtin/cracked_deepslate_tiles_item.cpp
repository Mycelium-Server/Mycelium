
#include "cracked_deepslate_tiles_item.h"

#include "../../block/builtin/cracked_deepslate_tiles_block.h"

CrackedDeepslateTilesItem::CrackedDeepslateTilesItem() = default;
CrackedDeepslateTilesItem::~CrackedDeepslateTilesItem() = default;

int CrackedDeepslateTilesItem::getID() const {
  return 304;
}

std::shared_ptr<Item> CrackedDeepslateTilesItem::clone() const {
  return std::make_shared<CrackedDeepslateTilesItem>();
}

int CrackedDeepslateTilesItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrackedDeepslateTilesBlock().getId();
}
