
#include "lapis_lazuli_item.h"

LapisLazuliItem::LapisLazuliItem() = default;
LapisLazuliItem::~LapisLazuliItem() = default;

int LapisLazuliItem::getID() const {
  return 724;
}

std::shared_ptr<Item> LapisLazuliItem::clone() const {
  return std::make_shared<LapisLazuliItem>();
}
