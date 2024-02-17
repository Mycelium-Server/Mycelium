
#include "prismarine_crystals_item.h"

PrismarineCrystalsItem::PrismarineCrystalsItem() = default;
PrismarineCrystalsItem::~PrismarineCrystalsItem() = default;

int PrismarineCrystalsItem::getID() const {
  return 1009;
}

std::shared_ptr<Item> PrismarineCrystalsItem::clone() const {
  return std::make_shared<PrismarineCrystalsItem>();
}
