#include <iostream>

using namespace std;

int main() {

	int length = 0, stnd = 0;
	int input = 0, idx = 0;
	int *smaller;

	cin >> length >> stnd;
	smaller = new int[length];

	for (int i = 0; i < length; i++) {
		cin >> input;

		if (input < stnd) {
			smaller[idx++] = input;
		}
	}

	for (int i = 0; i < idx; i++) {
		cout << smaller[i] << " ";
	}

	delete[] smaller;

	return 0;
}