
#include "cooked_mutton_item.h"

CookedMuttonItem::CookedMuttonItem() = default;
CookedMuttonItem::~CookedMuttonItem() = default;

int CookedMuttonItem::getID() const {
  return 1024;
}

std::shared_ptr<Item> CookedMuttonItem::clone() const {
  return std::make_shared<CookedMuttonItem>();
}
