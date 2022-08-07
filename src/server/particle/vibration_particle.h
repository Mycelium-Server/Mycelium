#pragma once

#include "../entity/entity.h"
#include "../location.h"
#include "particle.h"

class VibrationParticle : public AbstractParticle {
 public:
  VibrationParticle();
  ~VibrationParticle() override;

 public:
  void writeData(ByteBuffer&) override;
  [[nodiscard]] int getParticleID() const override;

 public:
  std::string positionSourceType;
  ProtocolPosition blockPosition {};
  Entity* entity = nullptr;
  float entityEyeHeight = 0;// TODO: Move to Entity class
  int ticks = 0;
};