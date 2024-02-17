

#include "azure_bluet_block.h"

AzureBluetBlock::AzureBluetBlock() = default;
AzureBluetBlock::~AzureBluetBlock() = default;

short AzureBluetBlock::getId() const {
  return 1670;
}

std::shared_ptr<Block> AzureBluetBlock::clone() const {
  std::shared_ptr<AzureBluetBlock> copy = std::make_shared<AzureBluetBlock>();
  return copy;
}
