
#include "cod_spawn_egg_item.h"

CodSpawnEggItem::CodSpawnEggItem() = default;
CodSpawnEggItem::~CodSpawnEggItem() = default;

int CodSpawnEggItem::getID() const {
  return 920;
}

std::shared_ptr<Item> CodSpawnEggItem::clone() const {
  return std::make_shared<CodSpawnEggItem>();
}
