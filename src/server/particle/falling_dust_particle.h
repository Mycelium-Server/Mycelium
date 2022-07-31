#pragma once

#include "particle.h"

class FallingDustParticle : public AbstractParticle {
 public:
  FallingDustParticle();
  ~FallingDustParticle() override;

 public:
  void writeData(ByteBuffer&) override;
  [[nodiscard]] int getParticleID() const override;

 public:
  int blockState = 0;// TODO: BlockState/Block class/enum/struct
};