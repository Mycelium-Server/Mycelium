
#include "ender_pearl_item.h"

EnderPearlItem::EnderPearlItem() = default;
EnderPearlItem::~EnderPearlItem() = default;

int EnderPearlItem::getID() const {
  return 897;
}

std::shared_ptr<Item> EnderPearlItem::clone() const {
  return std::make_shared<EnderPearlItem>();
}
