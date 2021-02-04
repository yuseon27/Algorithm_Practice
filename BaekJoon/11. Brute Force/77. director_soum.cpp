#include <iostream>

using namespace std;

int main() {
	int input, orig_num = 665, num, cnt = 0;
	bool prev = false;

	cin >> input;

	while (input > 0) {
		orig_num++;
		num = orig_num;
		cnt = 0;
		while (num != 0) {
			
			if (num % 10 == 6) {
				if ((!prev && cnt == 0) || prev) {
					cnt++;
					prev = true;
				}

				if (cnt == 3) {
					input--;
					break;
				}
			}
			else {
				cnt = 0;
				prev = false;
			}
			num /= 10;
		}

	}

	cout << orig_num << "\n";

	return 0;
}