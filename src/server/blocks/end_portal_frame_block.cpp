#include "end_portal_frame_block.h"

EndPortalFrameBlock::EndPortalFrameBlock() = default;
EndPortalFrameBlock::~EndPortalFrameBlock() = default;

short EndPortalFrameBlock::getId() const {
  if (eye == EYE_TRUE && facing == FACING_NORTH) return 5737;
  if (eye == EYE_TRUE && facing == FACING_SOUTH) return 5738;
  if (eye == EYE_TRUE && facing == FACING_WEST) return 5739;
  if (eye == EYE_TRUE && facing == FACING_EAST) return 5740;
  if (eye == EYE_FALSE && facing == FACING_NORTH) return 5741;
  if (eye == EYE_FALSE && facing == FACING_SOUTH) return 5742;
  if (eye == EYE_FALSE && facing == FACING_WEST) return 5743;
  if (eye == EYE_FALSE && facing == FACING_EAST) return 5744;
  return 5741;
}
