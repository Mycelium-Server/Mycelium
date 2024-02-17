#pragma once

#include "event_loop.h"

class EventLoopFactory {
 public:
  EventLoopFactory();
  ~EventLoopFactory();

 public:
  static void init(uint32_t);
  static EventLoop* next();
  static void removeOwner(EventLoop*);
  static uint32_t getMaxThreadCount();

 private:
  static std::vector<EventLoop*> eventLoops;
  static std::vector<uint32_t> owners;
  static std::mutex mutex;
  static uint32_t current;

};