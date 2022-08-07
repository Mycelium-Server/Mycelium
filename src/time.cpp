#include "time.h"

#include <uv.h>

long long currentTimeMillis() {
  uv_timeval64_t time;
  uv_gettimeofday(&time);
  return (((long long) time.tv_sec) * 1000) + (time.tv_usec / 1000);
}