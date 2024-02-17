
#include "cooked_porkchop_item.h"

CookedPorkchopItem::CookedPorkchopItem() = default;
CookedPorkchopItem::~CookedPorkchopItem() = default;

int CookedPorkchopItem::getID() const {
  return 800;
}

std::shared_ptr<Item> CookedPorkchopItem::clone() const {
  return std::make_shared<CookedPorkchopItem>();
}
