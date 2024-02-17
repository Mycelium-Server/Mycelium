

#include "bedrock_block.h"

BedrockBlock::BedrockBlock() = default;
BedrockBlock::~BedrockBlock() = default;

short BedrockBlock::getId() const {
  return 74;
}

std::shared_ptr<Block> BedrockBlock::clone() const {
  std::shared_ptr<BedrockBlock> copy = std::make_shared<BedrockBlock>();
  return copy;
}
