#include <iostream>

using namespace std;

int main() {
	int b1, b2, b3, d1, d2;
	int b_min, d_min;

	cin >> b1 >> b2 >> b3 >> d1 >> d2;
	b_min = b1;
	d_min = d1;

	if (b_min > b2) {
		b_min = b2;
	}
	if (b_min > b3) {
		b_min = b3;
	}
	if (d_min > d2) {
		d_min = d2;
	}
	
	cout << b_min + d_min - 50 << "\n";


	return 0;
}