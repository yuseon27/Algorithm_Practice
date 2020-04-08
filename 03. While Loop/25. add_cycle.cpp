#include <iostream>

using namespace std;

int main() {

	int num = 0, cycle = 0;
	int newn = 0, mid = 0;
	int ten = 0, one = 0, mid_ten = 0;

	cin >> num;
	newn = num;

	do {
		ten = newn / 10;
		one = newn - ten * 10;
		mid = ten + one;
		
		mid_ten = mid / 10;
		newn = one * 10 + (mid - mid_ten * 10);

		cycle++;
	} while (num != newn);

	cout << cycle << '\n';

	return 0;
}