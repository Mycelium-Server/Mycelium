#include "snow_block.h"

SnowBlock::SnowBlock() = default;
SnowBlock::~SnowBlock() = default;

short SnowBlock::getId() const {
  if (layers == LAYERS_1) return 4230;
  if (layers == LAYERS_2) return 4231;
  if (layers == LAYERS_3) return 4232;
  if (layers == LAYERS_4) return 4233;
  if (layers == LAYERS_5) return 4234;
  if (layers == LAYERS_6) return 4235;
  if (layers == LAYERS_7) return 4236;
  if (layers == LAYERS_8) return 4237;
  return 4230;
}
