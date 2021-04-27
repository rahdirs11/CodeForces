#include <iostream>

int main() {
  int n{};
  std::cin >> n;
  int* a = new int[n];
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
  int turn{1}, s{}, d{};
  int left{}, right{n - 1};
  int choice{};
  while (left <= right) {
    if (a[left] > a[right]) {
      choice = a[left];
      ++left;
    } else {
      choice = a[right];
      --right;
    }
    if (turn) {
      turn = 0;
      s += choice;
    } else {
      turn = 1;
      d += choice;
    }
  }
  std::cout << s << " " << d << std::endl;
  delete [] a;
  return 0;
}
