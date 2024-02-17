
#include "gunpowder_item.h"

GunpowderItem::GunpowderItem() = default;
GunpowderItem::~GunpowderItem() = default;

int GunpowderItem::getID() const {
  return 770;
}

std::shared_ptr<Item> GunpowderItem::clone() const {
  return std::make_shared<GunpowderItem>();
}
