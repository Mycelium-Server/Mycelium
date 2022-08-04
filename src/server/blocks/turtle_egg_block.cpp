#include "turtle_egg_block.h"

TurtleEggBlock::TurtleEggBlock() = default;
TurtleEggBlock::~TurtleEggBlock() = default;

short TurtleEggBlock::getId() const {
  if (eggs == EGGS_1 && hatch == HATCH_0) return 10379;
  if (eggs == EGGS_1 && hatch == HATCH_1) return 10380;
  if (eggs == EGGS_1 && hatch == HATCH_2) return 10381;
  if (eggs == EGGS_2 && hatch == HATCH_0) return 10382;
  if (eggs == EGGS_2 && hatch == HATCH_1) return 10383;
  if (eggs == EGGS_2 && hatch == HATCH_2) return 10384;
  if (eggs == EGGS_3 && hatch == HATCH_0) return 10385;
  if (eggs == EGGS_3 && hatch == HATCH_1) return 10386;
  if (eggs == EGGS_3 && hatch == HATCH_2) return 10387;
  if (eggs == EGGS_4 && hatch == HATCH_0) return 10388;
  if (eggs == EGGS_4 && hatch == HATCH_1) return 10389;
  if (eggs == EGGS_4 && hatch == HATCH_2) return 10390;
  return 10379;
}
