
#include "cod_item.h"

CodItem::CodItem() = default;
CodItem::~CodItem() = default;

int CodItem::getID() const {
  return 840;
}

std::shared_ptr<Item> CodItem::clone() const {
  return std::make_shared<CodItem>();
}
