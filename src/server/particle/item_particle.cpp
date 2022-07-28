#include "item_particle.h"

ItemParticle::ItemParticle() = default;
ItemParticle::~ItemParticle() = default;

void ItemParticle::writeData(ByteBuffer& buf) {
    buf.writeItemStack(item);
}

int ItemParticle::getParticleID() const {
    return 35;
}
