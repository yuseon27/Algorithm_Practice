#include <iostream>

using namespace std;

int is_prime(int num) {
  if (num == 1) {
    return 0;
  }
  else if (num == 2) {
    return num;
  }
  else if (num % 2 == 0) {
    return 0;
  }
  
  for (int i = 3; i < num; i=i+2) {
    if (num % i == 0) {
      return 0;
    }
  }
  return num;
}

int main() {
  int min = 0, sum = 0;
  int start, end;
  int tmp = 0;

  cin >> start;
  cin >> end;

  for (int i = start; i <= end; i++) {
    tmp = is_prime(i);

    if (min == 0 && tmp != 0) {
      min = tmp;
    }
    sum += tmp;
  }

  if (sum == 0) {
    cout << -1 << "\n";
  }
  else {
    cout << sum << "\n" << min << "\n";
  }
  
  return 0;
}
