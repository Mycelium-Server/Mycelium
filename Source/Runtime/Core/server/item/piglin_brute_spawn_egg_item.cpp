
#include "piglin_brute_spawn_egg_item.h"

PiglinBruteSpawnEggItem::PiglinBruteSpawnEggItem() = default;
PiglinBruteSpawnEggItem::~PiglinBruteSpawnEggItem() = default;

int PiglinBruteSpawnEggItem::getID() const {
  return 949;
}

std::shared_ptr<Item> PiglinBruteSpawnEggItem::clone() const {
  return std::make_shared<PiglinBruteSpawnEggItem>();
}
