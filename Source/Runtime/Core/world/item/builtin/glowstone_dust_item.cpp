
#include "glowstone_dust_item.h"

GlowstoneDustItem::GlowstoneDustItem() = default;
GlowstoneDustItem::~GlowstoneDustItem() = default;

int GlowstoneDustItem::getID() const {
  return 839;
}

std::shared_ptr<Item> GlowstoneDustItem::clone() const {
  return std::make_shared<GlowstoneDustItem>();
}
