
#include "area_effect_cloud_metadata.h"

#include "../../../particles/effect_particle.h"

AreaEffectCloudMetadata::AreaEffectCloudMetadata() = default;
AreaEffectCloudMetadata::~AreaEffectCloudMetadata() {
  delete particle;
}

void AreaEffectCloudMetadata::wrapperWrite(MetadataBuffer& wrapper) {
  EntityMetadata::wrapperWrite(wrapper);
  wrapper.writeFloat(8, radius);
  wrapper.writeVarInt(9, color);
  wrapper.writeBool(10, singlePoint);
  if (particle) {
    wrapper.writeParticle(11, particle);
  } else {
    AbstractParticle* defaultValue = new EffectParticle;
    wrapper.writeParticle(11, defaultValue);
    delete defaultValue;
  }
}
