

#include "end_gateway_block.h"

EndGatewayBlock::EndGatewayBlock() = default;
EndGatewayBlock::~EndGatewayBlock() = default;

short EndGatewayBlock::getId() const {
  return 10105;
}

std::shared_ptr<Block> EndGatewayBlock::clone() const {
  std::shared_ptr<EndGatewayBlock> copy = std::make_shared<EndGatewayBlock>();
  return copy;
}
