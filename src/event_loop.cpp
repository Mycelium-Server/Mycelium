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
  addToQueue([&]() { running = false; });
  thread.join();
}

void EventLoop::destroy() {
  delete this;
}

void EventLoop::addToQueue(std::function<void()>&& callable) {
  {
    std::unique_lock<std::mutex> lock(mutex);
    queue.emplace_back(std::move(callable));
  }
  cVar.notify_one();
}