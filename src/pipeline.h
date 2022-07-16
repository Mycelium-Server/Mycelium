#pragma once

#include "handler.h"
#include <string>
#include <unordered_map>
#include <deque>
#include <functional>

using handler_callback = std::function<bool(AbstractHandler*, int)>;

class Pipeline {
public:
    void addLast(std::string, AbstractHandler*);
    void addFirst(std::string, AbstractHandler*);
    void addAfter(std::string, std::string, AbstractHandler*);
    void addBefore(std::string, std::string, AbstractHandler*);
    void insert(int idx, std::string, AbstractHandler*);
    void remove(std::string);
    int indexOf(std::string);
    void replace(std::string, AbstractHandler*);
    void forEach(handler_callback, int start, int end);
    void forEach(handler_callback, int start);
    void forEach(handler_callback);
    AbstractHandler* get(int);
    AbstractHandler* get(std::string);
    std::unordered_map<std::string, AbstractHandler*>& handlers();

private:
    std::unordered_map<std::string, AbstractHandler*> pipeline;
    std::deque<std::string> order;

};