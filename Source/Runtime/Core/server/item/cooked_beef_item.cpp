
#include "cooked_beef_item.h"

CookedBeefItem::CookedBeefItem() = default;
CookedBeefItem::~CookedBeefItem() = default;

int CookedBeefItem::getID() const {
  return 893;
}

std::shared_ptr<Item> CookedBeefItem::clone() const {
  return std::make_shared<CookedBeefItem>();
}
