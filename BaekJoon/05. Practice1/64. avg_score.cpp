#include <iostream>

using namespace std;

int main() {
	double score = 0, sum = 0;
	
	for (int i = 0; i < 5; i++) {
		cin >> score;

		if (score < 40) {
			sum += 40;
		}
		else {
			sum += score;
		}
	}

	cout << sum / 5 << "\n";

	return 0;
}