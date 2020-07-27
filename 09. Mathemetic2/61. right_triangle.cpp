#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	int a2, b2, c2;

	while (1) {
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;

		a2 = a * a;
		b2 = b * b;
		c2 = c * c;

		if (a2 == b2 + c2) {
			cout << "right\n";
		}
		else if (b2 == a2 + c2) {
			cout << "right\n";
		}
		else if (c2 == a2 + b2) {
			cout << "right\n";
		}
		else {
			cout << "wrong\n";
		}
	}

	return 0;
}