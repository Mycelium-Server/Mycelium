#include "event_loop.h"

EventLoop::EventLoop() {
  thread = std::thread([&]() {
    std::vector<std::function<void()>> read;

    while (running) {
      {
        std::unique_lock<std::mutex> lock(mutex);
        cVar.wait(lock, [this] {
          return !queue.empty();
        });
        std::swap(read, queue);
      }

      for (auto& task: read) {
        task();
      }

      read.clear();
    }
  });
}

EventLoop::~EventLoop() {
  addToQueue([this]() {
    running = false;
  });
  thread.join();
}

void EventLoop::addToQueue(std::function<void()>&& callable) {
  {
    std::unique_lock<std::mutex> lock(mutex);
    queue.emplace_back(std::move(callable));
  }
  cVar.notify_one();
}