/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "area_effect_cloud_metadata.h"

#include "../../particle/effect_particle.h"

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
