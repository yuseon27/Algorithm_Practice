#include <iostream>

using namespace std;

int main() {
	int a = 0, b = 0;

	cin >> a >> b;

	int b100 = b / 100;
	int b10  = (b - b100 * 100) / 10;
	int b1 = b - b100*100 - b10*10;

	cout << b100 << b10 << b1 << endl;

	int c1 = a * b1;
	int c2 = a * b10;
	int c3 = a * b100;

	cout << c1 << endl << c2 << endl << c3 << endl;
	cout << c1 + c2*10 + c3*100 << endl;

	return 0;
}