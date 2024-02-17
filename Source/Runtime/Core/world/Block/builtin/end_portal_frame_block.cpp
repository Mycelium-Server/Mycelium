

#include "end_portal_frame_block.h"

EndPortalFrameBlock::EndPortalFrameBlock() = default;
EndPortalFrameBlock::~EndPortalFrameBlock() = default;

short EndPortalFrameBlock::getId() const {
  return 5737 + facing * 1 + eye * 4;
}

std::shared_ptr<Block> EndPortalFrameBlock::clone() const {
  std::shared_ptr<EndPortalFrameBlock> copy = std::make_shared<EndPortalFrameBlock>();
  copy->eye = eye;
  copy->facing = facing;
  return copy;
}
