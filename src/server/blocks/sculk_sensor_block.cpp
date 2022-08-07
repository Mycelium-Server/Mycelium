/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "sculk_sensor_block.h"

SculkSensorBlock::SculkSensorBlock() = default;
SculkSensorBlock::~SculkSensorBlock() = default;

short SculkSensorBlock::getId() const {
  if (power == POWER_0 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_TRUE) return 18673;
  if (power == POWER_0 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_FALSE) return 18674;
  if (power == POWER_0 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_TRUE) return 18675;
  if (power == POWER_0 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_FALSE) return 18676;
  if (power == POWER_0 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_TRUE) return 18677;
  if (power == POWER_0 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_FALSE) return 18678;
  if (power == POWER_1 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_TRUE) return 18679;
  if (power == POWER_1 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_FALSE) return 18680;
  if (power == POWER_1 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_TRUE) return 18681;
  if (power == POWER_1 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_FALSE) return 18682;
  if (power == POWER_1 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_TRUE) return 18683;
  if (power == POWER_1 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_FALSE) return 18684;
  if (power == POWER_2 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_TRUE) return 18685;
  if (power == POWER_2 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_FALSE) return 18686;
  if (power == POWER_2 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_TRUE) return 18687;
  if (power == POWER_2 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_FALSE) return 18688;
  if (power == POWER_2 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_TRUE) return 18689;
  if (power == POWER_2 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_FALSE) return 18690;
  if (power == POWER_3 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_TRUE) return 18691;
  if (power == POWER_3 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_FALSE) return 18692;
  if (power == POWER_3 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_TRUE) return 18693;
  if (power == POWER_3 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_FALSE) return 18694;
  if (power == POWER_3 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_TRUE) return 18695;
  if (power == POWER_3 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_FALSE) return 18696;
  if (power == POWER_4 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_TRUE) return 18697;
  if (power == POWER_4 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_FALSE) return 18698;
  if (power == POWER_4 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_TRUE) return 18699;
  if (power == POWER_4 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_FALSE) return 18700;
  if (power == POWER_4 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_TRUE) return 18701;
  if (power == POWER_4 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_FALSE) return 18702;
  if (power == POWER_5 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_TRUE) return 18703;
  if (power == POWER_5 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_FALSE) return 18704;
  if (power == POWER_5 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_TRUE) return 18705;
  if (power == POWER_5 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_FALSE) return 18706;
  if (power == POWER_5 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_TRUE) return 18707;
  if (power == POWER_5 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_FALSE) return 18708;
  if (power == POWER_6 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_TRUE) return 18709;
  if (power == POWER_6 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_FALSE) return 18710;
  if (power == POWER_6 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_TRUE) return 18711;
  if (power == POWER_6 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_FALSE) return 18712;
  if (power == POWER_6 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_TRUE) return 18713;
  if (power == POWER_6 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_FALSE) return 18714;
  if (power == POWER_7 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_TRUE) return 18715;
  if (power == POWER_7 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_FALSE) return 18716;
  if (power == POWER_7 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_TRUE) return 18717;
  if (power == POWER_7 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_FALSE) return 18718;
  if (power == POWER_7 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_TRUE) return 18719;
  if (power == POWER_7 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_FALSE) return 18720;
  if (power == POWER_8 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_TRUE) return 18721;
  if (power == POWER_8 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_FALSE) return 18722;
  if (power == POWER_8 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_TRUE) return 18723;
  if (power == POWER_8 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_FALSE) return 18724;
  if (power == POWER_8 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_TRUE) return 18725;
  if (power == POWER_8 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_FALSE) return 18726;
  if (power == POWER_9 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_TRUE) return 18727;
  if (power == POWER_9 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_FALSE) return 18728;
  if (power == POWER_9 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_TRUE) return 18729;
  if (power == POWER_9 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_FALSE) return 18730;
  if (power == POWER_9 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_TRUE) return 18731;
  if (power == POWER_9 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_FALSE) return 18732;
  if (power == POWER_10 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_TRUE) return 18733;
  if (power == POWER_10 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_FALSE) return 18734;
  if (power == POWER_10 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_TRUE) return 18735;
  if (power == POWER_10 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_FALSE) return 18736;
  if (power == POWER_10 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_TRUE) return 18737;
  if (power == POWER_10 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_FALSE) return 18738;
  if (power == POWER_11 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_TRUE) return 18739;
  if (power == POWER_11 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_FALSE) return 18740;
  if (power == POWER_11 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_TRUE) return 18741;
  if (power == POWER_11 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_FALSE) return 18742;
  if (power == POWER_11 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_TRUE) return 18743;
  if (power == POWER_11 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_FALSE) return 18744;
  if (power == POWER_12 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_TRUE) return 18745;
  if (power == POWER_12 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_FALSE) return 18746;
  if (power == POWER_12 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_TRUE) return 18747;
  if (power == POWER_12 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_FALSE) return 18748;
  if (power == POWER_12 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_TRUE) return 18749;
  if (power == POWER_12 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_FALSE) return 18750;
  if (power == POWER_13 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_TRUE) return 18751;
  if (power == POWER_13 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_FALSE) return 18752;
  if (power == POWER_13 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_TRUE) return 18753;
  if (power == POWER_13 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_FALSE) return 18754;
  if (power == POWER_13 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_TRUE) return 18755;
  if (power == POWER_13 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_FALSE) return 18756;
  if (power == POWER_14 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_TRUE) return 18757;
  if (power == POWER_14 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_FALSE) return 18758;
  if (power == POWER_14 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_TRUE) return 18759;
  if (power == POWER_14 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_FALSE) return 18760;
  if (power == POWER_14 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_TRUE) return 18761;
  if (power == POWER_14 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_FALSE) return 18762;
  if (power == POWER_15 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_TRUE) return 18763;
  if (power == POWER_15 && sculk_sensor_phase == SCULK_SENSOR_PHASE_INACTIVE && waterlogged == WATERLOGGED_FALSE) return 18764;
  if (power == POWER_15 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_TRUE) return 18765;
  if (power == POWER_15 && sculk_sensor_phase == SCULK_SENSOR_PHASE_ACTIVE && waterlogged == WATERLOGGED_FALSE) return 18766;
  if (power == POWER_15 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_TRUE) return 18767;
  if (power == POWER_15 && sculk_sensor_phase == SCULK_SENSOR_PHASE_COOLDOWN && waterlogged == WATERLOGGED_FALSE) return 18768;
  return 18674;
}
