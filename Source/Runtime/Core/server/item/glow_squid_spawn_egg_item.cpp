
#include "glow_squid_spawn_egg_item.h"

GlowSquidSpawnEggItem::GlowSquidSpawnEggItem() = default;
GlowSquidSpawnEggItem::~GlowSquidSpawnEggItem() = default;

int GlowSquidSpawnEggItem::getID() const {
  return 933;
}

std::shared_ptr<Item> GlowSquidSpawnEggItem::clone() const {
  return std::make_shared<GlowSquidSpawnEggItem>();
}
