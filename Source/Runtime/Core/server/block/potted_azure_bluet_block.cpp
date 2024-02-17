

#include "potted_azure_bluet_block.h"

PottedAzureBluetBlock::PottedAzureBluetBlock() = default;
PottedAzureBluetBlock::~PottedAzureBluetBlock() = default;

short PottedAzureBluetBlock::getId() const {
  return 6910;
}

std::shared_ptr<Block> PottedAzureBluetBlock::clone() const {
  std::shared_ptr<PottedAzureBluetBlock> copy = std::make_shared<PottedAzureBluetBlock>();
  return copy;
}
