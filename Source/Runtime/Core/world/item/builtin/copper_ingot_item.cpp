
#include "copper_ingot_item.h"

CopperIngotItem::CopperIngotItem() = default;
CopperIngotItem::~CopperIngotItem() = default;

int CopperIngotItem::getID() const {
  return 730;
}

std::shared_ptr<Item> CopperIngotItem::clone() const {
  return std::make_shared<CopperIngotItem>();
}
