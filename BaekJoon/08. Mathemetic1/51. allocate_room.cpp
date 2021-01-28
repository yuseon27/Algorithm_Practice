#include <iostream>

using namespace std;

int main(){
  int num;
  int height, weight, guest;
  int h_loc, w_loc;
  int *room_num;

  cin >> num;
  room_num = new int[num];

  for (int i = 0; i < num; i++) {
    cin >> height >> weight >> guest;

    // Get h and w room number
    w_loc = (guest-1) / height + 1;
    h_loc = guest % height;
    if (h_loc == 0) {
      h_loc = height;
    }

    room_num[i] = h_loc * 100 + w_loc;
  }

  for (int i = 0; i < num; i++) {
    cout << room_num[i] << "\n";
  }
  
  delete[] room_num;

  return 0;
}
