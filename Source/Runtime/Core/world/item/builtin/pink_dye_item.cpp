
#include "pink_dye_item.h"

PinkDyeItem::PinkDyeItem() = default;
PinkDyeItem::~PinkDyeItem() = default;

int PinkDyeItem::getID() const {
  return 855;
}

std::shared_ptr<Item> PinkDyeItem::clone() const {
  return std::make_shared<PinkDyeItem>();
}
