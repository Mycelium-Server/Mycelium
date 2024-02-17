
#include "item_registry.h"

#include "kelp_item.h"
#include "knowledge_book_item.h"

void ItemRegistry::generateK() {

  { // ID: 207
    registry[207] = std::make_shared<KelpItem>();
  }

  { // ID: 1056
    registry[1056] = std::make_shared<KnowledgeBookItem>();
  }
}