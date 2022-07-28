#pragma once

#include "../../../ByteBuffer.h"
#include "metadata_buffer.h"

class AbstractEntityMetadata {
public:
    AbstractEntityMetadata();
    virtual ~AbstractEntityMetadata();

public:
    virtual void write(ByteBuffer&);
    virtual void wrapperWrite(MetadataBuffer&) = 0;

};