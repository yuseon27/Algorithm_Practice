#include <iostream>

using namespace std;

int main() {
  int n = 0, rem_five = 0;
  int num_five = 0, num_three = 0;

  cin >> n;
  num_five = n / 5;

  while(num_five >= 0) {
    rem_five = n - num_five * 5;
    if (rem_five % 3 == 0) {
      num_three = rem_five / 3;
      break;
    }
    else {
      num_five--;
    }
  }

  if (num_five == -1) {
    cout << -1;
  }
  else {
    cout << num_five + num_three;
  }

  return 0;
}
