#pragma once

#include "particle.h"

class DustColorTransitionParticle : public AbstractParticle {
 public:
  DustColorTransitionParticle();
  ~DustColorTransitionParticle() override;

 public:
  void writeData(ByteBuffer&) override;
  [[nodiscard]] int getParticleID() const override;

 public:
  float red = 0;
  float green = 0;
  float blue = 0;
  float scale = 0.01;
  float toRed = 0;
  float toGreen = 0;
  float toBlue = 0;
};