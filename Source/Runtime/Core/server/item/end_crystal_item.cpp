
#include "end_crystal_item.h"

EndCrystalItem::EndCrystalItem() = default;
EndCrystalItem::~EndCrystalItem() = default;

int EndCrystalItem::getID() const {
  return 1041;
}

std::shared_ptr<Item> EndCrystalItem::clone() const {
  return std::make_shared<EndCrystalItem>();
}
