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


#include "glow_lichen_block.h"

GlowLichenBlock::GlowLichenBlock() = default;
GlowLichenBlock::~GlowLichenBlock() = default;

short GlowLichenBlock::getId() const {
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5199;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5200;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5201;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5202;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5203;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5204;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5205;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5206;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5207;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5208;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5209;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5210;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5211;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5212;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5213;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5214;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5215;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5216;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5217;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5218;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5219;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5220;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5221;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5222;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5223;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5224;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5225;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5226;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5227;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5228;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5229;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5230;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5231;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5232;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5233;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5234;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5235;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5236;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5237;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5238;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5239;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5240;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5241;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5242;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5243;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5244;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5245;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5246;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5247;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5248;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5249;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5250;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5251;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5252;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5253;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5254;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5255;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5256;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5257;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5258;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5259;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5260;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5261;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5262;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5263;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5264;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5265;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5266;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5267;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5268;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5269;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5270;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5271;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5272;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5273;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5274;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5275;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5276;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5277;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5278;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5279;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5280;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5281;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5282;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5283;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5284;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5285;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5286;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5287;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5288;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5289;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5290;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5291;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5292;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5293;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5294;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5295;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5296;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5297;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5298;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5299;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5300;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5301;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5302;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5303;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5304;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5305;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5306;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5307;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5308;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5309;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5310;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5311;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5312;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5313;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5314;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5315;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5316;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5317;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5318;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5319;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5320;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5321;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5322;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 5323;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 5324;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 5325;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 5326;
  return 5326;
}

std::shared_ptr<Block> GlowLichenBlock::clone() const {
  std::shared_ptr<GlowLichenBlock> copy = std::make_shared<GlowLichenBlock>();
  copy->down = down;
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
