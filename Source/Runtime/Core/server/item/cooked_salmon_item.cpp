
#include "cooked_salmon_item.h"

CookedSalmonItem::CookedSalmonItem() = default;
CookedSalmonItem::~CookedSalmonItem() = default;

int CookedSalmonItem::getID() const {
  return 845;
}

std::shared_ptr<Item> CookedSalmonItem::clone() const {
  return std::make_shared<CookedSalmonItem>();
}
