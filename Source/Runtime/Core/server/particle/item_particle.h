#pragma once

#include "../itemstack.h"
#include "particle.h"

class ItemParticle : public AbstractParticle {
 public:
  ItemParticle();
  ~ItemParticle() override;

 public:
  void writeData(ByteBuffer&) override;
  [[nodiscard]] int getParticleID() const override;

 public:
  ItemStack item {};
};