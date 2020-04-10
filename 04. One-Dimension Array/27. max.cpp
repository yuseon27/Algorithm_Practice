#include <iostream>

using namespace std;

int main() {
	int num = 9;
	int* values;
	int max_idx = 0;

	values = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> values[i];
	}

	for (int i = 1; i < num; i++) {
		if (values[max_idx] < values[i]) {
			max_idx = i;
		}
	}

	cout << values[max_idx] << "\n" << max_idx+1 << "\n";
	return 0;
}