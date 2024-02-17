#pragma once

#include "block.h"

class SculkSensorBlock : public Block {
 public:
  SculkSensorBlock();
  ~SculkSensorBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    POWER_0 = 0,
    POWER_1 = 1,
    POWER_2 = 2,
    POWER_3 = 3,
    POWER_4 = 4,
    POWER_5 = 5,
    POWER_6 = 6,
    POWER_7 = 7,
    POWER_8 = 8,
    POWER_9 = 9,
    POWER_10 = 10,
    POWER_11 = 11,
    POWER_12 = 12,
    POWER_13 = 13,
    POWER_14 = 14,
    POWER_15 = 15,
  } power = POWER_0;

  enum {
    SCULK_SENSOR_PHASE_INACTIVE = 0,
    SCULK_SENSOR_PHASE_ACTIVE = 1,
    SCULK_SENSOR_PHASE_COOLDOWN = 2,
  } sculk_sensor_phase = SCULK_SENSOR_PHASE_INACTIVE;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
