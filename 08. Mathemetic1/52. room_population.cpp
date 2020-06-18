#include <iostream>

using namespace std;

int cal_population(int h, int w) {
  if (w == 1) {
    return 1;
  }
  else if (h == 0) {
    return w;
  }

  return cal_population(h-1, w) + cal_population(h, w-1);
  
}

int main() {
  int test_num, height, width;
  int *result;

  cin >> test_num;

  result = new int[test_num];

  for (int i = 0; i < test_num; i++) {
    cin >> height >> width;

    result[i] = cal_population(height, width);
  }

  // Print result
  for (int i = 0; i < test_num; i++) {
    cout << result[i] << "\n";
  }

  delete[] result;

  return 0;
}
