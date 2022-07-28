#pragma once

#include "particle.h"
#include "../itemstack.h"

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