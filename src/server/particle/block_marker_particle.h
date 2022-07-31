#pragma once

#include "particle.h"

class BlockMarkerParticle : public AbstractParticle {
 public:
  BlockMarkerParticle();
  ~BlockMarkerParticle() override;

 public:
  void writeData(ByteBuffer&) override;
  [[nodiscard]] int getParticleID() const override;

 public:
  int blockState = 0;// TODO: BlockState/Block class/enum/struct
};