#include <iostream>
#define MAX_NUM 10000

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int num, tmp, max_num = 0;
	int count[MAX_NUM + 1] = { 0 };

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> tmp;
		count[tmp]++;

		if (tmp > max_num) {
			max_num = tmp;
		}
	}

	for (int i = 0; i <= max_num; i++) {
		if (count[i] == 0)
			continue;
		for (int j = 0; j < count[i]; j++) {
			cout << i << "\n";
		}
	}

	return 0;
}