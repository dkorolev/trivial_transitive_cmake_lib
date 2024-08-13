#include "trivial_cmake_lib.h"

int trivial_transitive_cmake_lib_duplicate(int x) {
  return trivial_cmake_lib_add(x, x);
}
