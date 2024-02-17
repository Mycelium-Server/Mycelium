
#include "totem_of_undying_item.h"

TotemOfUndyingItem::TotemOfUndyingItem() = default;
TotemOfUndyingItem::~TotemOfUndyingItem() = default;

int TotemOfUndyingItem::getID() const {
  return 1053;
}

std::shared_ptr<Item> TotemOfUndyingItem::clone() const {
  return std::make_shared<TotemOfUndyingItem>();
}
