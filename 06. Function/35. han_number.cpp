#include <iostream>
#include <vector>

using namespace std;

bool is_hansu(int num) {
	vector<int> numbers;
	int orig_num = num;

	while (num != 0) {
		numbers.push_back(num % 10);
		num /= 10;

	}


	if (orig_num < 10) {
		return true;
	}

	int diff_st = numbers[1] - numbers[0];
	int diff = 0;

	for (int i = 2; i < numbers.size(); i++) {
		diff = numbers[i] - numbers[i - 1];

		if (diff != diff_st) {
			return false;
		}
	}
	return true;
}

int main() {
	int input = 0, cnt = 0;
	cin >> input;

	for (int i = 1; i <= input; i++) {
		if (is_hansu(i)) {
			cnt++;
		}
	}

	cout << cnt << "\n";

	return 0;
}