
#include "azure_bluet_item.h"

#include "../block/azure_bluet_block.h"

AzureBluetItem::AzureBluetItem() = default;
AzureBluetItem::~AzureBluetItem() = default;

int AzureBluetItem::getID() const {
  return 187;
}

std::shared_ptr<Item> AzureBluetItem::clone() const {
  return std::make_shared<AzureBluetItem>();
}

int AzureBluetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AzureBluetBlock().getId();
}