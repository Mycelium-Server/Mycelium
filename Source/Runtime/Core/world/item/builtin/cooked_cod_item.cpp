
#include "cooked_cod_item.h"

CookedCodItem::CookedCodItem() = default;
CookedCodItem::~CookedCodItem() = default;

int CookedCodItem::getID() const {
  return 844;
}

std::shared_ptr<Item> CookedCodItem::clone() const {
  return std::make_shared<CookedCodItem>();
}
