#pragma once

#include "../handler.h"
#include "../encryption.h"

class PacketSplitter : public InboundHandler {
public:
    PacketSplitter();
    ~PacketSplitter();

public:
    bool onConnect(ConnectionContext*) override;
    bool onDisconnect(ConnectionContext*) override;
    bool decode(ConnectionContext*, void*, std::vector<void*>&) override;

private:
    ByteBuffer* buf;
    int remaining = 0;

};

class PacketDecoder : public InboundHandler {
public:
    PacketDecoder();
    ~PacketDecoder();

public:
    bool onConnect(ConnectionContext*) override;
    bool onDisconnect(ConnectionContext*) override;
    bool decode(ConnectionContext*, void*, std::vector<void*>&) override;

};

class PacketDecompressor : public InboundHandler {
public:
    PacketDecompressor();
    ~PacketDecompressor();

public:
    bool onConnect(ConnectionContext*) override;
    bool onDisconnect(ConnectionContext*) override;
    bool decode(ConnectionContext*, void*, std::vector<void*>&) override;

};

class PacketDecrypt : public InboundHandler {
public:
    PacketDecrypt(const CipherAES&);
    ~PacketDecrypt();

public:
    bool onConnect(ConnectionContext*) override;
    bool onDisconnect(ConnectionContext*) override;
    bool decode(ConnectionContext*, void*, std::vector<void*>&) override;

private:
    CipherAES cipher;

};

class PacketHandler : public FinalHandler {
public:
    PacketHandler();
    ~PacketHandler();

public:
    void handle(ConnectionContext*, void*) override;
    bool onConnect(ConnectionContext*) override;
    bool onDisconnect(ConnectionContext*) override;

};

class PacketEncoder : public OutboundHandler {
public:
    PacketEncoder();
    ~PacketEncoder();

public:
    bool encode(ConnectionContext*, void*, void*&) override;

};

class PacketPrepender : public OutboundHandler {
public:
    PacketPrepender();
    ~PacketPrepender();

public:
    bool encode(ConnectionContext*, void*, void*&) override;

};

class PacketCompressor : public OutboundHandler {
public:
    PacketCompressor();
    ~PacketCompressor();

public:
    bool encode(ConnectionContext*, void*, void*&) override;

};

class PacketEncrypt : public OutboundHandler {
public:
    PacketEncrypt(const CipherAES&);
    ~PacketEncrypt();

public:
    bool encode(ConnectionContext*, void*, void*&) override;

private:
    CipherAES cipher;

};