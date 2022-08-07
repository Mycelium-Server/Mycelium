#pragma once

#include <condition_variable>
#include <mutex>
#include <thread>
#include <vector>
#include <functional>

class EventLoop {
 public:
  EventLoop();

 public:
  void addToQueue(std::function<void()>&& callable);
  void destroy();

 private:
  ~EventLoop();

 private:
  std::vector<std::function<void()>> queue;
  std::thread thread;
  std::mutex mutex;
  std::condition_variable cVar;
  bool running = true;
};