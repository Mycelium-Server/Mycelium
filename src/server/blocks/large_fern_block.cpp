#include "large_fern_block.h"

LargeFernBlock::LargeFernBlock() = default;
LargeFernBlock::~LargeFernBlock() = default;

short LargeFernBlock::getId() const {
  if (half == HALF_UPPER) return 8636;
  if (half == HALF_LOWER) return 8637;
  return 8637;
}
