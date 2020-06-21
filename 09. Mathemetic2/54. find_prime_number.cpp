#include <iostream>

using namespace std;

int main() {
  int start, end, tmp;
  int *arr;

  cin >> start >> end;\
  tmp = end + 1;
  arr = new int[tmp];

  for (int i = 2; i <= end; i++) {
    arr[i] = i;
  }


  for (int i = 2; i <= end; i++) {
    if (arr[i] == 0) {
      continue;
    }

    for (int j=i+i; j <= end; j+=i) {
      arr[j] = 0;
    }
  }

  for (int i = start; i <= end; i++) {
    if (arr[i] != 0) {
      cout << arr[i] << "\n";
    }
  }

  delete[] arr;
  
  return 0;
}
