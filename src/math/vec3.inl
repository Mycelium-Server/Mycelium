/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
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

#pragma once

#include <cmath>

using std::sqrt;

template<typename T>
class Vector3 {
 public:
  Vector3()
      : Vector3(0) {}
  explicit Vector3(T t)
      : Vector3(t, t, t) {}
  Vector3(T x, T y, T z)
      : x(x),
        y(y),
        z(z) {}

  Vector3<T> operator-() const {
    return Vector3f(-x, -y, -z);
  }

  float operator[](int i) const {
    if (i == 0)
      return x;
    if (i == 1)
      return y;
    if (i == 2)
      return z;
    return x;
  }

  float& operator[](int i) {
    if (i == 0)
      return x;
    if (i == 1)
      return y;
    if (i == 2)
      return z;
    return x;
  }

  Vector3<T>& operator+=(const Vector3<T>& v) {
    x += v.x;
    y += v.y;
    z += v.z;
    return *this;
  }

  Vector3<T>& operator*=(const Vector3<T>& v) {
    x *= v.x;
    y *= v.y;
    z *= v.z;
    return *this;
  }

  Vector3<T>& operator-=(const Vector3<T>& v) {
    x -= v.x;
    y -= v.y;
    z -= v.z;
    return *this;
  }

  Vector3<T>& operator/=(const Vector3<T>& v) {
    x /= v.x;
    y /= v.y;
    z /= v.z;
    return *this;
  }

  Vector3<T>& operator*=(const T t) {
    return *this *= Vector3f(t);
  }

  Vector3<T>& operator+=(const T t) {
    return *this += Vector3f(t);
  }

  Vector3<T>& operator-=(const T t) {
    return *this += -t;
  }

  Vector3<T>& operator/=(const T t) {
    return *this *= 1 / t;
  }

  T length() const {
    return sqrt(lengthSq());
  }

  T lengthSq() const {
    return dot(*this);
  }

  T dot(const Vector3<T>& v) const {
    return x * v.x + y * v.y + z * v.z;
  }

  Vector3<T> cross(const Vector3<T>& v) {
    return Vector3<T>(
        y * v.z - z * v.y,
        z * v.x - x * v.z,
        x * v.y - y * v.x);
  }
  
  Vector3<T> normalize() const {
    return *this / length();
  }

 public:
  T x;
  T y;
  T z;
};

template<typename T>
inline Vector3<T> operator+(const Vector3<T>& u, const Vector3<T>& v) {
  return Vector3<T>(u.x + v.x, u.y + v.y, u.z + v.z);
}

template<typename T>
inline Vector3<T> operator-(const Vector3<T>& u, const Vector3<T>& v) {
  return Vector3<T>(u.x - v.x, u.y - v.y, u.z - v.z);
}

template<typename T>
inline Vector3<T> operator*(const Vector3<T>& u, const Vector3<T>& v) {
  return Vector3<T>(u.x * v.x, u.y * v.y, u.z * v.z);
}

template<typename T>
inline Vector3<T> operator/(const Vector3<T>& u, const Vector3<T>& v) {
  return Vector3<T>(u.x / v.x, u.y / v.y, u.z / v.z);
}

template<typename T>
inline Vector3<T> operator+(const T t, const Vector3<T>& v) {
  return Vector3<T>(t + v.x, t + v.y, t + v.z);
}

template<typename T>
inline Vector3<T> operator-(const T t, const Vector3<T>& v) {
  return Vector3<T>(t - v.x, t - v.y, t - v.z);
}

template<typename T>
inline Vector3<T> operator*(const T t, const Vector3<T>& v) {
  return Vector3<T>(t * v.x, t * v.y, t * v.z);
}

template<typename T>
inline Vector3<T> operator/(const T t, const Vector3<T>& v) {
  return Vector3<T>(t / v.x, t / v.y, t / v.z);
}

template<typename T>
inline Vector3<T> operator+(const Vector3<T>& v, const T t) {
  return t + v;
}

template<typename T>
inline Vector3<T> operator-(const Vector3<T>& v, const T t) {
  return Vector3<T>(v.x - t, v.y - t, v.z - t);
}

template<typename T>
inline Vector3<T> operator*(const Vector3<T>& v, const T t) {
  return t * v;
}

template<typename T>
inline Vector3<T> operator/(const Vector3<T>& v, const T t) {
  return (1 / t) * v;
}

typedef Vector3<float> Vector3f;
typedef Vector3<double> Vector3d;
typedef Vector3<int> Vector3i;