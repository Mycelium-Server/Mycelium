
#include "glow_ink_sac_item.h"

GlowInkSacItem::GlowInkSacItem() = default;
GlowInkSacItem::~GlowInkSacItem() = default;

int GlowInkSacItem::getID() const {
  return 847;
}

std::shared_ptr<Item> GlowInkSacItem::clone() const {
  return std::make_shared<GlowInkSacItem>();
}
