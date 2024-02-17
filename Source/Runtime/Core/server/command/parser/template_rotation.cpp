
#include "template_rotation.h"

TemplateRotationParser::TemplateRotationParser() = default;
TemplateRotationParser::~TemplateRotationParser() = default;

int TemplateRotationParser::getID() const {
  return 46;
}

std::string TemplateRotationParser::getIdentifier() const {
  return {};
}

void TemplateRotationParser::writeProperties(ByteBuffer &) const {}
