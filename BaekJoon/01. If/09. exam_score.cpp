#include <iostream>

using namespace std;

int main() {
	double s = 0.0;

	cin >> s;

	if (90.0 <= s && s <= 100.0) {
		cout << "A" << endl;
	}
	else if (80.0 <= s && s < 90.0) {
		cout << "B" << endl;
	}
	else if (70.0 <= s && s < 80.0) {
		cout << "C" << endl;
	}
	else if (60.0 <= s && s < 70.0) {
		cout << "D" << endl;
	}
	else {
		cout << "F" << endl;
	}

	return 0;
}