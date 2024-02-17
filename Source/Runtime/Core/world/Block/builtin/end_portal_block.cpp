

#include "end_portal_block.h"

EndPortalBlock::EndPortalBlock() = default;
EndPortalBlock::~EndPortalBlock() = default;

short EndPortalBlock::getId() const {
  return 5736;
}

std::shared_ptr<Block> EndPortalBlock::clone() const {
  std::shared_ptr<EndPortalBlock> copy = std::make_shared<EndPortalBlock>();
  return copy;
}
