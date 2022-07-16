#pragma once

#include "ByteBuffer.h"
#include <vector>

class ConnectionContext;

class AbstractHandler {
public: 
    virtual bool isInboundHandler() const = 0;
    virtual bool isOutboundHandler() const = 0;

};

class InboundHandler : public AbstractHandler {
public:
    bool isInboundHandler() const override;
    bool isOutboundHandler() const override;

public:
    virtual bool onConnect(ConnectionContext*) = 0;
    virtual bool onDisconnect(ConnectionContext*) = 0;
    virtual bool decode(ConnectionContext*, void*, std::vector<void*>&) = 0;

};

class OutboundHandler : public AbstractHandler {
public:
    bool isInboundHandler() const override;
    bool isOutboundHandler() const override;

public:
    virtual bool encode(ConnectionContext*, void*, void*&) = 0;

};

class FinalHandler : public InboundHandler {
public:
    bool decode(ConnectionContext*, void*, std::vector<void*>&) override;

public:
    virtual void handle(ConnectionContext*, void*) = 0;

};