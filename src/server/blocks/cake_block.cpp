#include "cake_block.h"

CakeBlock::CakeBlock() = default;
CakeBlock::~CakeBlock() = default;

short CakeBlock::getId() const {
  if (bites == BITES_0) return 4333;
  if (bites == BITES_1) return 4334;
  if (bites == BITES_2) return 4335;
  if (bites == BITES_3) return 4336;
  if (bites == BITES_4) return 4337;
  if (bites == BITES_5) return 4338;
  if (bites == BITES_6) return 4339;
  return 4333;
}
