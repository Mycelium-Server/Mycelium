
#include "magma_cube_spawn_egg_item.h"

MagmaCubeSpawnEggItem::MagmaCubeSpawnEggItem() = default;
MagmaCubeSpawnEggItem::~MagmaCubeSpawnEggItem() = default;

int MagmaCubeSpawnEggItem::getID() const {
  return 940;
}

std::shared_ptr<Item> MagmaCubeSpawnEggItem::clone() const {
  return std::make_shared<MagmaCubeSpawnEggItem>();
}
