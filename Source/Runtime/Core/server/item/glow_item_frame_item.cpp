
#include "glow_item_frame_item.h"

GlowItemFrameItem::GlowItemFrameItem() = default;
GlowItemFrameItem::~GlowItemFrameItem() = default;

int GlowItemFrameItem::getID() const {
  return 988;
}

std::shared_ptr<Item> GlowItemFrameItem::clone() const {
  return std::make_shared<GlowItemFrameItem>();
}
