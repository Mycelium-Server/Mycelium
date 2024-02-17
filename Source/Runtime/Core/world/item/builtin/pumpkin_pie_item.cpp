
#include "pumpkin_pie_item.h"

PumpkinPieItem::PumpkinPieItem() = default;
PumpkinPieItem::~PumpkinPieItem() = default;

int PumpkinPieItem::getID() const {
  return 1003;
}

std::shared_ptr<Item> PumpkinPieItem::clone() const {
  return std::make_shared<PumpkinPieItem>();
}
