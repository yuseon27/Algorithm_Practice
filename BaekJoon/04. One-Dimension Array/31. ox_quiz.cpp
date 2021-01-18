#include <iostream>
#include <string>

using namespace std;

int main() {
	int num = 0, seq = 0, score = 0;
	string result;
	int* total_score;
	
	cin >> num;
	total_score = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> result;

		score = 0;
		seq = 0;
		for (int j = 0; j < result.length(); j++) {
			if (result.at(j) == 'O') {
				seq += 1;
				score += seq;
			}
			else {
				seq = 0;
			}
		}
		total_score[i] = score;
	}

	for (int i = 0; i < num; i++) {
		cout << total_score[i] << "\n";
	}

	delete[] total_score;

	return 0;
}