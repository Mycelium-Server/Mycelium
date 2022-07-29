#pragma once

#include "entity_metadata.h"

class EndCrystalMetadata : public EntityMetadata {
public:
    EndCrystalMetadata();
    ~EndCrystalMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&);

public:
    std::optional<ProtocolPosition> beamTarget;
    bool showBottom = true;

};