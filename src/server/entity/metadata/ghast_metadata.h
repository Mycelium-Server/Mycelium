#pragma once

class GhastMetadata : public FlyingMetadata {
 public:
  GhastMetadata();
  ~GhastMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer &) override;

 public:
  bool IsAttacking = false;
};