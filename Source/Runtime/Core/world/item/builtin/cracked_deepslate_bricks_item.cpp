
#include "cracked_deepslate_bricks_item.h"

#include "../../block/builtin/cracked_deepslate_bricks_block.h"

CrackedDeepslateBricksItem::CrackedDeepslateBricksItem() = default;
CrackedDeepslateBricksItem::~CrackedDeepslateBricksItem() = default;

int CrackedDeepslateBricksItem::getID() const {
  return 302;
}

std::shared_ptr<Item> CrackedDeepslateBricksItem::clone() const {
  return std::make_shared<CrackedDeepslateBricksItem>();
}

int CrackedDeepslateBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrackedDeepslateBricksBlock().getId();
}
