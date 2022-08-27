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


#include "tripwire_block.h"

TripwireBlock::TripwireBlock() = default;
TripwireBlock::~TripwireBlock() = default;

short TripwireBlock::getId() const {
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_TRUE) return 5867;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_FALSE) return 5868;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_TRUE) return 5869;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_FALSE) return 5870;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_TRUE) return 5871;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_FALSE) return 5872;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_TRUE) return 5873;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_FALSE) return 5874;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_TRUE) return 5875;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_FALSE) return 5876;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_TRUE) return 5877;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_FALSE) return 5878;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_TRUE) return 5879;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_FALSE) return 5880;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_TRUE) return 5881;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_FALSE) return 5882;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_TRUE) return 5883;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_FALSE) return 5884;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_TRUE) return 5885;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_FALSE) return 5886;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_TRUE) return 5887;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_FALSE) return 5888;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_TRUE) return 5889;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_FALSE) return 5890;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_TRUE) return 5891;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_FALSE) return 5892;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_TRUE) return 5893;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_FALSE) return 5894;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_TRUE) return 5895;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_FALSE) return 5896;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_TRUE) return 5897;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_FALSE) return 5898;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_TRUE) return 5899;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_FALSE) return 5900;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_TRUE) return 5901;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_FALSE) return 5902;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_TRUE) return 5903;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_FALSE) return 5904;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_TRUE) return 5905;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_FALSE) return 5906;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_TRUE) return 5907;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_FALSE) return 5908;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_TRUE) return 5909;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_FALSE) return 5910;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_TRUE) return 5911;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_FALSE) return 5912;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_TRUE) return 5913;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_FALSE) return 5914;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_TRUE) return 5915;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_FALSE) return 5916;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_TRUE) return 5917;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_FALSE) return 5918;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_TRUE) return 5919;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_FALSE) return 5920;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_TRUE) return 5921;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_FALSE) return 5922;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_TRUE) return 5923;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_FALSE) return 5924;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_TRUE) return 5925;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_FALSE) return 5926;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_TRUE) return 5927;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_FALSE) return 5928;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_TRUE) return 5929;
  if (attached == ATTACHED_TRUE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_FALSE) return 5930;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_TRUE) return 5931;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_FALSE) return 5932;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_TRUE) return 5933;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_FALSE) return 5934;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_TRUE) return 5935;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_FALSE) return 5936;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_TRUE) return 5937;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_FALSE) return 5938;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_TRUE) return 5939;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_FALSE) return 5940;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_TRUE) return 5941;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_FALSE) return 5942;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_TRUE) return 5943;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_FALSE) return 5944;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_TRUE) return 5945;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_FALSE) return 5946;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_TRUE) return 5947;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_FALSE) return 5948;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_TRUE) return 5949;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_FALSE) return 5950;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_TRUE) return 5951;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_FALSE) return 5952;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_TRUE) return 5953;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_FALSE) return 5954;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_TRUE) return 5955;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_FALSE) return 5956;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_TRUE) return 5957;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_FALSE) return 5958;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_TRUE) return 5959;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_FALSE) return 5960;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_TRUE) return 5961;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_TRUE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_FALSE) return 5962;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_TRUE) return 5963;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_FALSE) return 5964;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_TRUE) return 5965;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_FALSE) return 5966;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_TRUE) return 5967;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_FALSE) return 5968;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_TRUE) return 5969;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_FALSE) return 5970;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_TRUE) return 5971;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_FALSE) return 5972;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_TRUE) return 5973;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_FALSE) return 5974;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_TRUE) return 5975;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_FALSE) return 5976;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_TRUE) return 5977;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_TRUE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_FALSE) return 5978;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_TRUE) return 5979;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_FALSE) return 5980;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_TRUE) return 5981;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_FALSE) return 5982;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_TRUE) return 5983;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_FALSE) return 5984;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_TRUE) return 5985;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_TRUE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_FALSE) return 5986;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_TRUE) return 5987;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_TRUE && west == WEST_FALSE) return 5988;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_TRUE) return 5989;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_TRUE && south == SOUTH_FALSE && west == WEST_FALSE) return 5990;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_TRUE) return 5991;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_TRUE && west == WEST_FALSE) return 5992;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_TRUE) return 5993;
  if (attached == ATTACHED_FALSE && disarmed == DISARMED_FALSE && east == EAST_FALSE && north == NORTH_FALSE && powered == POWERED_FALSE && south == SOUTH_FALSE && west == WEST_FALSE) return 5994;
  return 5994;
}

std::shared_ptr<Block> TripwireBlock::clone() const {
  std::shared_ptr<TripwireBlock> copy = std::make_shared<TripwireBlock>();
  copy->attached = attached;
  copy->disarmed = disarmed;
  copy->east = east;
  copy->north = north;
  copy->powered = powered;
  copy->south = south;
  copy->west = west;
  return copy;
}