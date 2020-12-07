#include <iostream>

using namespace std;

int main() {
	int num;
	int** info;
	int* cnt;

	cin >> num;

	// Allocate
	info = new int*[num];
	cnt = new int[num];
	for (int i = 0; i < num; i++) {
		info[i] = new int [3];

		cin >> info[i][0] >> info[i][1];
		info[i][2] = 0;

		cnt[i] = 1;
	}

	// brute force
	for (int i = 0; i < num; i++) {
		for (int j = i+1; j < num; j++) {
			if (info[i][0] > info[j][0] && info[i][1] > info[j][1]) {
				cnt[j]++;
			}
			else if (info[i][0] < info[j][0] && info[i][1] < info[j][1]) {
				cnt[i]++;
			}
		}
	}

	// print
	for (int i = 0; i < num; i++) {
		cout << cnt[i] << " ";
	}

	// Release
	for (int i = 0; i < num; i++) {
		delete(info[i]);
	}
	delete(info);
	delete(cnt);

	return 0;
}