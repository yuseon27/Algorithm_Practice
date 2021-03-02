#include <iostream>

using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {

	int num = 0, ans = 0;
	int* wines, * sums;

	cin >> num;
	wines = new int[num+3];
	sums = new int[num+3];

	for (int i = 3; i < num+3; i++) {
		cin >> wines[i];
	}

	// Calculate Maximum
	for (int i = 0; i < 3; i++) {
		wines[i] = 0;
		sums[i] = 0;
	}

	for (int i = 3; i < num+3; i++) {
		sums[i] = max(sums[i - 3] + wines[i - 1], sums[i - 2]) + wines[i];
		sums[i] = max(sums[i], sums[i - 1]); // In case of not drinking in a row

		ans = max(ans, sums[i]);
	}
	cout << ans << "\n";

	delete[] wines;
	delete[] sums;

	return 0;
}