#include <iostream>

using namespace std;

int main() {

	int x_0, y_0, x_1, y_1, x_2, y_2, x_3, y_3;

	cin >> x_0 >> y_0;
	cin >> x_1 >> y_1;
	cin >> x_2 >> y_2;

	if (x_0 == x_1) {
		x_3 = x_2;
	}
	else if (x_0 == x_2) {
		x_3 = x_1;
	}
	else {
		x_3 = x_0;
	}

	if (y_0 == y_1) {
		y_3 = y_2;
	}
	else if (y_0 == y_2) {
		y_3 = y_1;
	}
	else {
		y_3 = y_0;
	}

	cout << x_3 << " " << y_3 << "\n";

	return 0;
}