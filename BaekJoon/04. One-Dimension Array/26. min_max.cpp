#include <iostream>

using namespace std;

int main() {
	int num = 0;
	int *values;
	int min_idx = 0, max_idx = 0;

	cin >> num;
	values = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> values[i];
	}

	for (int i = 1; i < num; i++) {
		if (values[i] < values[min_idx]) {
			min_idx = i;
		}
		if (values[max_idx] < values[i]) {
			max_idx = i;
		}
	}
	
	cout << values[min_idx] << " " << values[max_idx] << "\n";
	return 0;
}