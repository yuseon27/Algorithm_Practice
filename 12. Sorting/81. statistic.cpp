#include <iostream>
#include <cmath>
#include <algorithm>

#define MAX_NUM 8000

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int num, tmp;
	double sum = 0;
	int* arr;
	int count[MAX_NUM + 1] = { 0 };
	int cnt_max_num = 0, cnt_max_idx = 0;
	bool cnt_second = false;

	// Input
	cin >> num;
	arr = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> tmp;

		sum += tmp;
		arr[i] = tmp;
		count[tmp+4000]++;

		if (count[tmp + 4000] > cnt_max_num) {
			cnt_max_num = count[tmp + 4000];
		}
	}

	// Avg
	cout << round((double)sum / num) << "\n";

	// Median
	sort(arr, arr + num);
	cout << arr[num/2] << "\n";

	// Mode - Be careful with this part
	for (int i = 0; i <= MAX_NUM; i++) {
		if (count[i] == cnt_max_num) {
			cnt_max_idx = i - 4000;
			if (cnt_second)
				break;
			cnt_second = true;
		}
	}
	cout << cnt_max_idx << "\n";

	// Range
	cout << arr[num-1] - arr[0] << "\n";


	delete[] arr;
	return 0;
}