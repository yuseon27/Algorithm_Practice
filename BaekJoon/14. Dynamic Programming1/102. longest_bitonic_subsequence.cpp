#include <iostream>
#define MAX 1000

using namespace std;

int main() {
	int num = 0;
	int dec_v = 0, inc_v = 0;
	int input[MAX] = { 0 };
	int bitonic[MAX][2] = { 0 };

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> input[i];
	}

	bitonic[0][0] = 1;  // increasing
	bitonic[num - 1][1] = 1;  // decreasing
	for (int i = 1; i < num; i++) {
		inc_v = 0;
		dec_v = 0;
		for (int j = 0; j < i; j++) {
			if (input[j] < input[i] && inc_v < bitonic[j][0]) { // increasing
				inc_v = bitonic[j][0];
			}
			if (input[num - 1 - j] < input[num - 1 - i] && dec_v < bitonic[num - 1 - j][1]) {
				dec_v = bitonic[num - 1 - j][1];
			}

		}
		inc_v++;
		dec_v++;
		bitonic[i][0] = inc_v;
		bitonic[num-1-i][1] = dec_v;
	}

	//bitonic[num-1][1] = 1;  // decreasing
	//for (int i = num-2; i >= 0; i--) {
	//	dec_v = 0;
	//	for (int j = num - 1; j > i; j--) {
	//		if (input[j] < input[i] && dec_v < bitonic[j][1]) {   // decreasing
	//			dec_v = bitonic[j][1];
	//		}
	//	}
	//	dec_v++;
	//	bitonic[i][1] = dec_v;
	//}

	inc_v = 0;
	for (int i = 0; i < num; i++) {
		//cout << input[i] << " " << bitonic[i][0] << " " << bitonic[i][1] << "\n";
		if (inc_v < bitonic[i][0] + bitonic[i][1] - 1) {
			inc_v = bitonic[i][0] + bitonic[i][1] - 1;
		}
	}
	cout << inc_v << "\n";

	return 0;
}