
#include "template_mirror.h"

TemplateMirrorParser::TemplateMirrorParser() = default;
TemplateMirrorParser::~TemplateMirrorParser() = default;

int TemplateMirrorParser::getID() const {
  return 45;
}

std::string TemplateMirrorParser::getIdentifier() const {
  return {};
}

void TemplateMirrorParser::writeProperties(ByteBuffer &) const {}