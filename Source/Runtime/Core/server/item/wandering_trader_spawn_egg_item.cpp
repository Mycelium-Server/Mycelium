
#include "wandering_trader_spawn_egg_item.h"

WanderingTraderSpawnEggItem::WanderingTraderSpawnEggItem() = default;
WanderingTraderSpawnEggItem::~WanderingTraderSpawnEggItem() = default;

int WanderingTraderSpawnEggItem::getID() const {
  return 973;
}

std::shared_ptr<Item> WanderingTraderSpawnEggItem::clone() const {
  return std::make_shared<WanderingTraderSpawnEggItem>();
}
