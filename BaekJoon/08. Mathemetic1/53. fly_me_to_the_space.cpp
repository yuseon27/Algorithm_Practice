#include <iostream>

using namespace std;

int cal_how_many(int start, int end, int before) {
  int check = end - start - before;

  // cout << start << " " << end << " " << before << " " << check << endl;

  // if (start == end) {
  //   return 0;
  // } 
  if (check > 1) {
    return 1+cal_how_many(start+before+1,end, before+1);
  }
  else {
    return 1;
  }
}

int main() {
  int test_num;
  int *result;
  int x, y;

  cin >> test_num;
  result = new int[test_num];

  for (int i = 0; i < test_num; i++) {
    cin >> x >> y;
    y--;
    result[i] = cal_how_many(x, y, 0) + 1;
  }

  // Print
  for (int i = 0; i < test_num; i++) {
    cout << result[i] << "\n";
  }

  delete[] result;

  return 0;
}
