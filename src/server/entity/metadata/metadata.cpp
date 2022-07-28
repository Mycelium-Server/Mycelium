#include "metadata.h"

AbstractEntityMetadata::AbstractEntityMetadata() = default;
AbstractEntityMetadata::~AbstractEntityMetadata() = default;

void AbstractEntityMetadata::write(ByteBuffer& buf) {
    MetadataBuffer wrapper(buf);
    wrapperWrite(wrapper);
    wrapper.finalize();
}
