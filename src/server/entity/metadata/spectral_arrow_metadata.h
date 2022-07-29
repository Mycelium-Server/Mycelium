#pragma once

#include "abstract_arrow_metadata.h"

class SpectralArrowMetadata : public AbstractArrowMetadata {
public:
    SpectralArrowMetadata();
    ~SpectralArrowMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

};