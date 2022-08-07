#include "lectern_block.h"

LecternBlock::LecternBlock() = default;
LecternBlock::~LecternBlock() = default;

short LecternBlock::getId() const {
  if (facing == FACING_NORTH && has_book == HAS_BOOK_TRUE && powered == POWERED_TRUE) return 16038;
  if (facing == FACING_NORTH && has_book == HAS_BOOK_TRUE && powered == POWERED_FALSE) return 16039;
  if (facing == FACING_NORTH && has_book == HAS_BOOK_FALSE && powered == POWERED_TRUE) return 16040;
  if (facing == FACING_NORTH && has_book == HAS_BOOK_FALSE && powered == POWERED_FALSE) return 16041;
  if (facing == FACING_SOUTH && has_book == HAS_BOOK_TRUE && powered == POWERED_TRUE) return 16042;
  if (facing == FACING_SOUTH && has_book == HAS_BOOK_TRUE && powered == POWERED_FALSE) return 16043;
  if (facing == FACING_SOUTH && has_book == HAS_BOOK_FALSE && powered == POWERED_TRUE) return 16044;
  if (facing == FACING_SOUTH && has_book == HAS_BOOK_FALSE && powered == POWERED_FALSE) return 16045;
  if (facing == FACING_WEST && has_book == HAS_BOOK_TRUE && powered == POWERED_TRUE) return 16046;
  if (facing == FACING_WEST && has_book == HAS_BOOK_TRUE && powered == POWERED_FALSE) return 16047;
  if (facing == FACING_WEST && has_book == HAS_BOOK_FALSE && powered == POWERED_TRUE) return 16048;
  if (facing == FACING_WEST && has_book == HAS_BOOK_FALSE && powered == POWERED_FALSE) return 16049;
  if (facing == FACING_EAST && has_book == HAS_BOOK_TRUE && powered == POWERED_TRUE) return 16050;
  if (facing == FACING_EAST && has_book == HAS_BOOK_TRUE && powered == POWERED_FALSE) return 16051;
  if (facing == FACING_EAST && has_book == HAS_BOOK_FALSE && powered == POWERED_TRUE) return 16052;
  if (facing == FACING_EAST && has_book == HAS_BOOK_FALSE && powered == POWERED_FALSE) return 16053;
  return 16041;
}
