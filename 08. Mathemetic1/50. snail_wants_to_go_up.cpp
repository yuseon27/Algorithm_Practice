#include <iostream>

using namespace std;

int main() {
  int a, b, v;
  int result = 0;
  cin >> a >> b >> v;

  result = (v - b - 1) / (a - b) + 1;
  cout << result;

  return 0;
}
