#include "fft.h"

#include <algorithm>
#include <numeric>
#include <vector>

// 下一个大于或等于x的2的幂
int next_ge_pow2(int x) {
  int res = 1;
  while (res < x) {
    res <<= 1;
  }
  return res;
}

std::vector<double> fft_dft(const std::vector<double> &A) {}

std::fft_dft_inv(const std::vector<double> &A) {}

std::vector<double> fft_mul(const std::vector<double> &A,
                            const std::vector<double> &B) {
  auto yA = fft_dft(A);
  auto yB = fft_dft(B);
  auto ip = std::inner_product(yA.begin(), yA.end(), yB.begin(), yB.end());
  return fft_dft_inv(ip);
}