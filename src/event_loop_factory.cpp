/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>

#include "event_loop_factory.h"

EventLoopFactory::EventLoopFactory() = default;
EventLoopFactory::~EventLoopFactory() = default;

void EventLoopFactory::init(unsigned int threadCount) {
  mutex.lock();
  for (auto& eventLoop: eventLoops) {
    eventLoop->destroy();
  }
  eventLoops.resize(threadCount);
  owners.resize(threadCount);
  for (unsigned i = 0; i < threadCount; i++) {
    eventLoops[i] = nullptr;
    owners[i] = 0;
  }
  mutex.unlock();
}

EventLoop* EventLoopFactory::next() {
  if (eventLoops.empty()) {
    return nullptr;
  }
  mutex.lock();
  if (current >= eventLoops.size()) {
    current = 0;
  }
  if (!eventLoops[current]) {
    eventLoops[current] = new EventLoop;
  }
  owners[current]++;
  mutex.unlock();
  return eventLoops[current++];
}

unsigned int EventLoopFactory::getMaxThreadCount() {
  return eventLoops.size();
}

void EventLoopFactory::removeOwner(EventLoop* eventLoop) {
  if (!eventLoop) {
    return;
  }
  mutex.lock();
  auto it = std::find(eventLoops.begin(), eventLoops.end(), eventLoop);
  if (it != eventLoops.end()) {
    size_t id = std::distance(eventLoops.begin(), it);
    owners[id]--;
    if (owners[id] == 0) {
      eventLoops[id]->destroy();
      eventLoops[id] = nullptr;
    }
  }
  mutex.unlock();
}

std::vector<EventLoop*> EventLoopFactory::eventLoops;
std::vector<unsigned int> EventLoopFactory::owners;
unsigned int EventLoopFactory::current = 0;
std::mutex EventLoopFactory::mutex;
