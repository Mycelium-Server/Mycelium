
#include "golden_chestplate_item.h"

GoldenChestplateItem::GoldenChestplateItem() = default;
GoldenChestplateItem::~GoldenChestplateItem() = default;

int GoldenChestplateItem::getID() const {
  return 791;
}

std::shared_ptr<Item> GoldenChestplateItem::clone() const {
  return std::make_shared<GoldenChestplateItem>();
}
