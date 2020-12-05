#include <iostream>

using namespace std;

int main() {
	int n, num, sum;
	bool check = false;
	cin >> n;

	for (int i = 0; i < n; i++) {
		num = i;
		sum = num;
	
		while (num != 0) {
			sum += num % 10;
			num /= 10;
		}

		if (sum == n) {
			cout << i << "\n";
			check = true;
			break;
		}

	}
	
	if (!check) {
		cout << 0 << "\n";
	}

	return 0;
}