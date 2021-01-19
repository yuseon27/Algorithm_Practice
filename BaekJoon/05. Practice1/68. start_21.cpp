#include <iostream>

using namespace std;

int main() {
	int num, rem;

	cin >> num;

	for (int i = 0; i < num; i++) {
		if (num % 2 == 0) {
			rem = num / 2;
			for (int j = 0; j < rem; j++) {
				cout << "* ";
			}
			cout << "\n";
			for (int j = 0; j < rem; j++) {
				cout << " *";
			}
			cout << "\n";
		}
		else {
			rem = num / 2 + 1;
			for (int j = 0; j < rem; j++) {
				cout << "* ";
			}
			cout << "\n";
			for (int j = 0; j < num - rem; j++) {
				cout << " *";
			}
			cout << "\n";
		}

	}

	return 0;
}