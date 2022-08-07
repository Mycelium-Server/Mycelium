#include "sea_pickle_block.h"

SeaPickleBlock::SeaPickleBlock() = default;
SeaPickleBlock::~SeaPickleBlock() = default;

short SeaPickleBlock::getId() const {
  if (pickles == PICKLES_1 && waterlogged == WATERLOGGED_TRUE) return 10521;
  if (pickles == PICKLES_1 && waterlogged == WATERLOGGED_FALSE) return 10522;
  if (pickles == PICKLES_2 && waterlogged == WATERLOGGED_TRUE) return 10523;
  if (pickles == PICKLES_2 && waterlogged == WATERLOGGED_FALSE) return 10524;
  if (pickles == PICKLES_3 && waterlogged == WATERLOGGED_TRUE) return 10525;
  if (pickles == PICKLES_3 && waterlogged == WATERLOGGED_FALSE) return 10526;
  if (pickles == PICKLES_4 && waterlogged == WATERLOGGED_TRUE) return 10527;
  if (pickles == PICKLES_4 && waterlogged == WATERLOGGED_FALSE) return 10528;
  return 10521;
}
