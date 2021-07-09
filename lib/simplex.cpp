#include "simplex.h"

void simplex::Init(int value_num) {
  value_num_ = value_num;
  is_basis_value_ = new bool[value_num_];
  A_ = new double*[value_num_];
  for (int i = 0; i < value_num_; i++) {
    A_[i] = new double[value_num_];
  }
}

void simplex::SetA(int i, int j, double value) { A_[i][j] = value; }

void simplex::SetB(int i, double value) { b_[i] = value; }

void simplex::SetC(int i, double value) { c_[i] = value; }

void simplex::SetV(double value) { v_ = value; }

void simplex::Point(int leave, int entry) {}