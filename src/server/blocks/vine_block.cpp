#include "vine_block.h"

VineBlock::VineBlock() = default;
VineBlock::~VineBlock() = default;

short VineBlock::getId() const {
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 5167;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 5168;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 5169;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 5170;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 5171;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 5172;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 5173;
  if (east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 5174;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 5175;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 5176;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 5177;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 5178;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 5179;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 5180;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 5181;
  if (east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 5182;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 5183;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 5184;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 5185;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 5186;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 5187;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 5188;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 5189;
  if (east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 5190;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_TRUE) return 5191;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && west == WEST_FALSE) return 5192;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_TRUE) return 5193;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && west == WEST_FALSE) return 5194;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_TRUE) return 5195;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && west == WEST_FALSE) return 5196;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_TRUE) return 5197;
  if (east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && west == WEST_FALSE) return 5198;
  return 5198;
}
