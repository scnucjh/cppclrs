#pragma once
#include <iostream>
#include <set>

class simplex {
 public:
  static std::string ClassName() { return "simplex"; }
  void Init(int value_num);
  void AddBasisValue(int id);
  void SetA(int i, int j, double value);
  void SetB(int i, double value);
  void SetC(int i, double value);
  void SetV(double value);
  double run();
  double run(double *x);

 private:
  bool *is_basis_value_;

  std::set<int> b_set_;

  int value_num_;
  double **A_;
  double *b_;
  double *c_;
  double v_;
};
