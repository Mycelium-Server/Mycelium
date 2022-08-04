#include "tnt_block.h"

TntBlock::TntBlock() = default;
TntBlock::~TntBlock() = default;

short TntBlock::getId() const {
  if (unstable == UNSTABLE_TRUE) return 1684;
  if (unstable == UNSTABLE_FALSE) return 1685;
  return 1685;
}
