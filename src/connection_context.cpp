#include "connection_context.h"
#include <iostream>

ConnectionContext::ConnectionContext(Pipeline* pipeline, uv_stream_t* stream)
    : pipeline(pipeline), stream(stream) {}

ConnectionContext::~ConnectionContext() {
    delete pipeline;
}

void write_cb(uv_write_t* req, int status) {
    if(status) {
        std::cout << "Unable to write data: " << uv_strerror(status);
        return;
    }
    free(req);
}

uv_buf_t async_tmp_;
uv_stream_t* async_stream_;
ByteBuffer* async_buf_;

void ConnectionContext::write(void* object, bool isAsync) {
    void* src = (void*)object;
    void* dst;
    pipeline->forEach([&](AbstractHandler* handler, int) {
        if(handler->isOutboundHandler()) {
            bool res = ((OutboundHandler*)handler)->encode(this, src, dst);
            src = dst;
            return res;
        }
        return true;
    });

    if(!src) return;
    auto* buf = (ByteBuffer*) src;

    uv_buf_t buffer;
    buffer.base = (char*)buf->data.data();
    buffer.len = buf->data.size();

    if(!isAsync) {
        auto* req = (uv_write_t*)malloc(sizeof(uv_write_t));
        uv_write(req, stream, &buffer, 1, write_cb);
        delete buf;
    } else {
        async_buf_ = buf;
        async_tmp_ = buffer;
        async_stream_ = stream;

        auto* async = (uv_async_t*) malloc(sizeof(uv_async_t));

        uv_async_init(uv_default_loop(), async, [](uv_async_t* handle) {
            auto* req = (uv_write_t*) malloc(sizeof(uv_write_t));
            uv_write(req, async_stream_, &async_tmp_, 1, write_cb);
            delete async_buf_;
            free(handle);
        });

        uv_async_send(async);
    }

}

void ConnectionContext::read(void* src, int idx) {
    if (idx >= pipeline->handlers().size()) return;
    AbstractHandler* handler = pipeline->get(idx);
    if (!handler->isInboundHandler()) {
        read(src, idx + 1);
        return;
    }

    std::vector<void*> dst;
    auto* inbound = (InboundHandler*) handler;
    if (!inbound->decode(this, src, dst)) return;
    for (void*& obj : dst) {
        read(obj, idx + 1);
    }
}

void ConnectionContext::read(ByteBuffer* buf) {
    read(buf, 0);
}

bool ConnectionContext::isActive() const {
    return active;
}
