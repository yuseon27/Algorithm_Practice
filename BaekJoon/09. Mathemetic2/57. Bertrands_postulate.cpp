#include <iostream>

using namespace std;

int cnt_prime(int start, int end) {
	int* arr = new int[end + 1];
	int cnt = 0;

	for (int i = 2; i <= end; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= end; i++) {
		if (arr[i] == 0) {
			continue;
		}
		
		for (int j = i + i; j <= end; j += i) {
			arr[j] = 0;
		}
	}

	for (int i = start+1; i <= end; i++) {
		if (arr[i] != 0) {
			cnt++;
		}
	}

	return cnt;
}

int main() {
	int start = 1, end, cnt = 0;

	while (start != 0) {
        cnt = 0;
		cin >> start;
		if (start == 0) {
			break;
		}
		end = start * 2;

		cout << cnt_prime(start, end) << "\n";
	}


	return 0;
}