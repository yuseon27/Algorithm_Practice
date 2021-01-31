#include <iostream>

using namespace std;

bool is_prime(int num) {
  if (num == 1) {
    return false;
  }
  else if (num == 2) {
    return true;
  }
  else if (num % 2 == 0) {
    return false;
  }
  
  for (int i = 3; i < num; i=i+2) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}


int main() {

  int num_case;
  int *input;
  int cnt = 0;

  cin >> num_case;
  input = new int[num_case];

  for (int i = 0; i < num_case; i++) {
    cin >> input[i];
  }

  for (int i = 0; i < num_case; i++) {
    if (is_prime(input[i])) {
      cnt++;
    }
  }
  
  cout << cnt << "\n";

  return 0;
}
