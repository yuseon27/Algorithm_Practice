#include <iostream>

using namespace std;

int main() {
	int num = 0, cnt = 0, over = 0;
	double avg = 0;
	int num_student;
	int* scores;
	double* result;

	cin >> num;
	result = new double[num];

	// Input Scores
	for (int i = 0; i < num; i++) {
		cin >> num_student;
		scores = new int[num_student];
		avg = 0;
		for (int j = 0; j < num_student; j++) {
			cin >> scores[j];
			avg += scores[j];
		}
		avg /= num_student;

		over = 0;
		for (int j = 0; j < num_student; j++) {
			if (scores[j] > avg) {
				over += 1;
			}
		}
		result[i] = (double)over / num_student * 100;

		// Free allocation
		delete[] scores;
	}

	cout << fixed;
	cout.precision(3);
	for (int i = 0; i < num; i++) {
		cout << result[i] << "%\n";
	}

	delete[] result;


	return 0;
}