#pragma once

#include "particle.h"

class DustParticle : public AbstractParticle {
 public:
  DustParticle();
  ~DustParticle() override;

 public:
  void writeData(ByteBuffer&) override;
  [[nodiscard]] int getParticleID() const override;

 public:
  float red = 0;
  float green = 0;
  float blue = 0;
  float scale = 0.01;
};