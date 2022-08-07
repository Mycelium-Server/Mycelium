#include "pipeline.h"

#include <algorithm>

void Pipeline::addFirst(const std::string& name, AbstractHandler* handler) {
  order.push_front(name);
  pipeline[name] = handler;
}

void Pipeline::addLast(const std::string& name, AbstractHandler* handler) {
  order.push_back(name);
  pipeline[name] = handler;
}

void Pipeline::addBefore(const std::string& base, const std::string& name, AbstractHandler* handler) {
  order.insert(std::find(order.begin(), order.end(), base), name);
  pipeline[name] = handler;
}

void Pipeline::addAfter(const std::string& base, const std::string& name, AbstractHandler* handler) {
  order.insert(std::next(std::find(order.begin(), order.end(), base)), name);
  pipeline[name] = handler;
}

void Pipeline::remove(const std::string& name) {
  pipeline.erase(name);
  order.erase(std::find(order.begin(), order.end(), name));
}

int Pipeline::indexOf(const std::string& name) {
  return (int) std::distance(order.begin(), std::find(order.begin(), order.end(), name));
}

void Pipeline::replace(const std::string& name, AbstractHandler* handler) {
  auto it = std::find(order.begin(), order.end(), name);
  if (it != order.end()) {
    pipeline[name] = handler;
    order[std::distance(order.begin(), it)] = name;
  }
}

void Pipeline::forEach(const handler_callback& cb, int start, int len) {
  for (int i = start; i < start + len; i++) {
    if (!cb(pipeline[order.at(i)], i))
      break;
  }
}

void Pipeline::forEach(const handler_callback& cb, int start) {
  forEach(cb, start, (int) pipeline.size());
}

void Pipeline::forEach(const handler_callback& cb) {
  forEach(cb, 0);
}

AbstractHandler* Pipeline::get(int idx) {
  return pipeline[order.at(idx)];
}

std::unordered_map<std::string, AbstractHandler*>& Pipeline::handlers() {
  return pipeline;
}

void Pipeline::insert(int idx, const std::string& name, AbstractHandler* handler) {
  order.insert(order.begin() + idx, name);
  pipeline[name] = handler;
}

AbstractHandler* Pipeline::get(const std::string& name) {
  return pipeline[name];
}
