#include <iostream>

using namespace std;

int main() {
	int a = 0, b = 0, c = 0, result = 0;
	const int ten = 10;
	int cnt[ten] = {0};
	int n = 0;

	cin >> a >> b >> c;
	result = a * b * c;

	while (result != 0) {
		n = result % ten;
		result /= ten;

		cnt[n] += 1;
	}

	for (int i = 0; i < ten; i++) {
		cout << cnt[i] << "\n";
	}

	return 0;
}