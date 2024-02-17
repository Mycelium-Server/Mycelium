#pragma once

#include <deque>
#include <functional>
#include <string>
#include <unordered_map>

#include "handler.h"

using handler_callback = std::function<bool(AbstractHandler*, int)>;

class Pipeline {
 public:
  void addLast(const std::string&, AbstractHandler*);
  void addFirst(const std::string&, AbstractHandler*);
  void addAfter(const std::string&, const std::string&, AbstractHandler*);
  void addBefore(const std::string&, const std::string&, AbstractHandler*);
  void insert(int idx, const std::string&, AbstractHandler*);
  void remove(const std::string&);
  int indexOf(const std::string&);
  void replace(const std::string&, AbstractHandler*);
  void forEach(const handler_callback&, int start, int end);
  void forEach(const handler_callback&, int start);
  void forEach(const handler_callback&);
  AbstractHandler* get(int);
  AbstractHandler* get(const std::string&);
  std::unordered_map<std::string, AbstractHandler*>& handlers();

 private:
  std::unordered_map<std::string, AbstractHandler*> pipeline;
  std::deque<std::string> order;
};