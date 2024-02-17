
#include "crying_obsidian_item.h"

#include "../../block/builtin/crying_obsidian_block.h"

CryingObsidianItem::CryingObsidianItem() = default;
CryingObsidianItem::~CryingObsidianItem() = default;

int CryingObsidianItem::getID() const {
  return 1111;
}

std::shared_ptr<Item> CryingObsidianItem::clone() const {
  return std::make_shared<CryingObsidianItem>();
}

int CryingObsidianItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CryingObsidianBlock().getId();
}
