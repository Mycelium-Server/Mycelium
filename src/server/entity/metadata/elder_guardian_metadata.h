#pragma once

#include "guardian_metadata.h"

class ElderGuardianMetadata : public GuardianMetadata {
public:
    ElderGuardianMetadata();
    ~ElderGuardianMetadata() override;

public:
    void wrapperWrite(MetadataBuffer&) override;

};