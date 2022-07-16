#include "handler.h"
#include "connection_context.h"

bool InboundHandler::isInboundHandler() const {
    return true;
}

bool InboundHandler::isOutboundHandler() const {
    return false;
}

bool OutboundHandler::isInboundHandler() const {
    return false;
}

bool OutboundHandler::isOutboundHandler() const {
    return true;
}

bool FinalHandler::decode(ConnectionContext* ctx, void* src, std::vector<void*>& dst) {
    handle(ctx, src);
    return true;
}