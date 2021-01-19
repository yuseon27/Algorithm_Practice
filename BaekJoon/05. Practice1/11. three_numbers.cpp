#include <iostream>

using namespace std;

int main() {

	int a = 0, b = 0, c = 0;

	cin >> a >> b >> c;

	if ((b <= a && a <= c) || (c <= a && a <= b)) {
		cout << a << endl;
	}
	else if ((a <= b && b <= c) || (c <= b && b <= a)) {
		cout << b << endl;
	}
	else {
		cout << c << endl;
	}

	return 0;
}