
#include "poisonous_potato_item.h"

PoisonousPotatoItem::PoisonousPotatoItem() = default;
PoisonousPotatoItem::~PoisonousPotatoItem() = default;

int PoisonousPotatoItem::getID() const {
  return 993;
}

std::shared_ptr<Item> PoisonousPotatoItem::clone() const {
  return std::make_shared<PoisonousPotatoItem>();
}
