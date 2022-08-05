#include "sculk_vein_block.h"

SculkVeinBlock::SculkVeinBlock() = default;
SculkVeinBlock::~SculkVeinBlock() = default;

short SculkVeinBlock::getId() const {
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18770;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18771;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18772;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18773;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18774;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18775;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18776;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18777;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18778;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18779;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18780;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18781;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18782;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18783;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18784;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18785;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18786;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18787;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18788;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18789;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18790;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18791;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18792;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18793;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18794;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18795;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18796;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18797;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18798;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18799;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18800;
  if (down == DOWN_TRUE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18801;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18802;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18803;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18804;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18805;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18806;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18807;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18808;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18809;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18810;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18811;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18812;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18813;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18814;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18815;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18816;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18817;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18818;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18819;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18820;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18821;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18822;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18823;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18824;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18825;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18826;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18827;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18828;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18829;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18830;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18831;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18832;
  if (down == DOWN_TRUE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18833;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18834;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18835;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18836;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18837;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18838;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18839;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18840;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18841;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18842;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18843;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18844;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18845;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18846;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18847;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18848;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18849;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18850;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18851;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18852;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18853;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18854;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18855;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18856;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18857;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18858;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18859;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18860;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18861;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18862;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18863;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18864;
  if (down == DOWN_FALSE && east == EAST_TRUE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18865;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18866;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18867;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18868;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18869;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18870;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18871;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18872;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18873;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18874;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18875;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18876;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18877;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18878;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18879;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18880;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_TRUE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18881;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18882;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18883;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18884;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18885;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18886;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18887;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18888;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_TRUE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18889;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18890;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18891;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18892;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_TRUE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18893;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_TRUE) return 18894;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_TRUE && west == WEST_FALSE) return 18895;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_TRUE) return 18896;
  if (down == DOWN_FALSE && east == EAST_FALSE && north == NORTH_FALSE && south == SOUTH_FALSE && up == UP_FALSE && waterlogged == WATERLOGGED_FALSE && west == WEST_FALSE) return 18897;
  return 18897;
}