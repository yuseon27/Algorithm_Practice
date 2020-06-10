#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int num = 0;
  int row = 0, cal = 0, tmp = 0;

  cin >> num;

  // 1. Get row
  //row(row-1)/2 + 1 < num    // lets say left is k

  cal = (num-1)*2;
  tmp = int(sqrt(cal));
  
  if (tmp * (tmp+1) <= cal) {
    tmp++;
  }

  row = tmp;
  cal = row*(row-1)/2+1;

  // 2. Find fraction
  // if row is even, starts with 1/row, else stars with row/1
  // result  : 
  // if even : row + (num-k) / 1 + (num-k)
  // if odd  : 1 + (num-k) / row + (num-k)

  tmp = num - cal;

  if (row % 2 == 0) {
    cout << 1+tmp << "/" << row - tmp << "\n";
  }
  else {
    cout << row - tmp << "/" << 1+tmp << "\n";
  }
  

  return 0;
}
