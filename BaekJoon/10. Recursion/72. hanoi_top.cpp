#include <iostream>

using namespace std;

void hanoi(int n, int from, int by, int to) {
	if (n == 1) {
		cout << from << " " << to << "\n";
	}
	else {
		hanoi(n - 1, from, to, by);
		cout << from << " " << to << "\n";
		hanoi(n - 1, by, from, to);
	}
}


int main() {
	int input;

	cin >> input;
	cout << (1 << input) - 1 << "\n";

	hanoi(input, 1, 2, 3);

	return 0;
}