
#include "end_portal_frame_item.h"

#include "../../block/builtin/end_portal_frame_block.h"

EndPortalFrameItem::EndPortalFrameItem() = default;
EndPortalFrameItem::~EndPortalFrameItem() = default;

int EndPortalFrameItem::getID() const {
  return 331;
}

std::shared_ptr<Item> EndPortalFrameItem::clone() const {
  return std::make_shared<EndPortalFrameItem>();
}

int EndPortalFrameItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return EndPortalFrameBlock().getId();
}