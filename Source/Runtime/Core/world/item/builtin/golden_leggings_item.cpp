
#include "golden_leggings_item.h"

GoldenLeggingsItem::GoldenLeggingsItem() = default;
GoldenLeggingsItem::~GoldenLeggingsItem() = default;

int GoldenLeggingsItem::getID() const {
  return 792;
}

std::shared_ptr<Item> GoldenLeggingsItem::clone() const {
  return std::make_shared<GoldenLeggingsItem>();
}
