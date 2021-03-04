#include <iostream>
#define MAX 1000

using namespace std;

int main() {

	int num = 0, max_v = 0;
	int input[MAX] = { 0, };
	int seq_cnt[MAX] = { 0, };

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> input[i];
	}

	seq_cnt[0] = 1;
	for (int i = 1; i < num; i++) {
		max_v = 0;
		for (int j = 0; j < i; j++) {
			if (input[j] < input[i] && max_v < seq_cnt[j]) {
				max_v = seq_cnt[j];
			}
		}
		max_v++;
		seq_cnt[i] = max_v;

		//cout << i << " " << seq_cnt[i] << "\n";
	}

	max_v = 0;
	for (int i = 0; i < num; i++) {
		if (max_v < seq_cnt[i]) {
			max_v = seq_cnt[i];
		}
	}
	cout << max_v << "\n";

	return 0;
}