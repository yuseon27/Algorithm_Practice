#include <iostream>

using namespace std;

int main() {
	int num = 0, max = 0;
	double avg = 0;
	cin >> num;

	// Input score
	int* score = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> score[i];
	}

	// Find Max
	max = score[0];
	for (int i = 1; i < num; i++) {
		if (max < score[i]) {
			max = score[i];
		}
	}
	
	// New Score and avg
	for (int i = 0; i < num; i++) {
		avg += double(score[i]) / max * 100;
	}
	avg = avg / num;
	cout << avg << "\n";


	return 0;
}