#pragma once
#include <iostream>

class simplex {
 public:
  static std::string ClassName() { return "simplex"; }

 public:
  bool *is_basis_value_;
};
