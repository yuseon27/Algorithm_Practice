#include <iostream>
#include <algorithm>

#define MAX_NUM 8000

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);

	int num, tmp;
	double sum = 0;
	int* arr;
	int count[MAX_NUM + 1] = { 0 };
	int cnt_max_num = 0, cnt_max_cnt = 0, cnt_max_idx = 0;
	int min_v = 4000, max_v = -4000;

	// Input
	cin >> num;
	arr = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> tmp;

		sum += tmp;
		arr[i] = tmp;
		count[i+4000]++;

		if (tmp > max_v) {
			max_v = tmp;
		}
		else if (tmp < min_v) {
			min_v = tmp;
		}
	}
	cout << "\n";

	// Avg
	cout << fixed;
	cout.precision(0);
	cout << (sum / num) << "\n";

	// Median
	int med = num / 2;
	sort(arr, arr + num);
	if (num % 2 == 0) {
		cout << double(arr[med - 1] + arr[med]) / 2 << "\n";
	}
	else {
		cout << arr[med] << "\n";
	}

	// Mode
	cnt_max_num = *max_element(count, count + MAX_NUM+1);
	cout << "  " << cnt_max_num << "\n";
	for (int i = 0; i <= MAX_NUM; i++) {
		if (count[i] == cnt_max_num) {
			cnt_max_cnt++;
			cnt_max_idx = i-4000;
			cout << cnt_max_idx << " ";
			if (cnt_max_cnt == 2)
				break;
		}
	}
	cout << cnt_max_idx << "\n";

	// Range
	cout << max_v - min_v << "\n";


	delete[] arr;
	return 0;
}
