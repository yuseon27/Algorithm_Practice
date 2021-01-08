#include <iostream>
#define MAX 41
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int test_case = 0, max_num = 1, input = 0;
	int zero_cnt[MAX] = { 1, 0 };
	int one_cnt[MAX] = { 0, 1 };

	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		cin >> input;

		if (max_num < input) {
			if (max_num == 1) {
				max_num = 2;
			}

			for (int j = max_num; j <= input; j++) {
				zero_cnt[j] = zero_cnt[j - 2] + zero_cnt[j - 1];
				one_cnt[j] = one_cnt[j - 2] + one_cnt[j - 1];
			}
			max_num = input;
		}
		cout << zero_cnt[input] << " " << one_cnt[input] << "\n";

	}
	return 0;
}