#include <iostream>

using namespace std;

int main() {
	int n, m;
	int* cards;
	int sim_sum = 0, sum = 0;
	bool check = false;

	cin >> n >> m;
	cards = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> cards[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = cards[i] + cards[j] + cards[k];

				if (sum > m) {
					continue;
				}
				else if (sum == m) {
					sim_sum = sum;
					check = true;
					break;
				}
				else if ((m - sum) < (m - sim_sum)) {
					sim_sum = sum;
				}
			}
			if (check)
				break;
		}
		if (check)
			break;
	}

	cout << sim_sum << "\n";


	return 0;
}