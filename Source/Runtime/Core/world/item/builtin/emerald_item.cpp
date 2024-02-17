
#include "emerald_item.h"

EmeraldItem::EmeraldItem() = default;
EmeraldItem::~EmeraldItem() = default;

int EmeraldItem::getID() const {
  return 723;
}

std::shared_ptr<Item> EmeraldItem::clone() const {
  return std::make_shared<EmeraldItem>();
}
