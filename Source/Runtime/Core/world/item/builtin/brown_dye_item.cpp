
#include "brown_dye_item.h"

BrownDyeItem::BrownDyeItem() = default;
BrownDyeItem::~BrownDyeItem() = default;

int BrownDyeItem::getID() const {
  return 861;
}

std::shared_ptr<Item> BrownDyeItem::clone() const {
  return std::make_shared<BrownDyeItem>();
}
