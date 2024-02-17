
#include "golden_axe_item.h"

GoldenAxeItem::GoldenAxeItem() = default;
GoldenAxeItem::~GoldenAxeItem() = default;

int GoldenAxeItem::getID() const {
  return 748;
}

std::shared_ptr<Item> GoldenAxeItem::clone() const {
  return std::make_shared<GoldenAxeItem>();
}
