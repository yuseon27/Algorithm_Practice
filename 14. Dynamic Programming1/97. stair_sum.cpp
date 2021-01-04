#include <iostream>
#include <vector>

#define MAX 300

using namespace std;

//struct StepInfo {
//	int sum;
//	int check;  // true = 1, false = 0
//} typedef Step;

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num = 0, sum = 0, max_v = 0, flag = 0;
	int steps[MAX] = {0, };
	int sums[MAX] = { 0, };
	//Step step_info[MAX];

	// Input
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> steps[i];
	}

	// Calculate Maximum
	sums[0] = steps[0];
	sums[1] = max(0, steps[0]) + steps[1];
	sums[2] = max(steps[0], steps[1]) + steps[2];

	for (int i = 3; i < num; i++) {
		sums[i] = max(sums[i - 3] + steps[i - 1], sums[i - 2]) + steps[i];
	}

	// Output
	cout << sums[num - 1] << "\n";

	return 0;
}

	//// Calculate Maximum
	//step_info[0] = { steps[0], 0 };
	//step_info[1] = { steps[1], 1 };

	//for (int i = 2; i <= num; i++) {

	//	if (i == num && step_info[i - 1].check == 1) {

	//	}

	//	if (step_info[i - 1].check == 2) {  // Must go two steps
	//		max_v = step_info[i - 2].sum;
	//		flag = 1;
	//		//cout << "must 2\n";
	//	}
	//	else {
	//		if (step_info[i - 1].sum > step_info[i - 2].sum) { // one step
	//			max_v = step_info[i - 1].sum;
	//			flag = step_info[i - 1].check + 1;
	//			//cout << "1\n";
	//		}
	//		else {  // two steps
	//			max_v = step_info[i - 2].sum;
	//			flag = 1;
	//			//cout << "2\n";
	//		}
	//	}
	//	step_info[i] = { steps[i] + max_v, flag };
	//
	//	//cout << step_info[i-2].sum << " " << step_info[i - 1].sum << " : "<< step_info[i].sum << " " << step_info[i].check << "\n";
	//}

	//cout << step_info[num].sum << "\n";



	//sum = steps[num];
	//int i = num;
	//while (i >= 0) {
	//	cout << i << " " << steps[i - 1] << " " << steps[i - 2];
	//	if (flag) {
	//		sum += steps[i - 2];
	//		flag = false;
	//		i -= 2;
	//	}
	//	else {
	//		if (steps[i - 1] > steps[i - 2]) {
	//			sum += steps[i - 1];
	//			flag = true;
	//			i -= 1;
	//		}
	//		else {
	//			sum += steps[i - 2];
	//			flag = false;
	//			i -= 2;
	//		}
	//	}
	//	cout << " " << sum << " " << i << "\n";

	//	if (i <= 1) {
	//		break;
	//	}
	//	
	//}

	//// Output
	//cout << sum << "\n";



	//step_info[num - 1] = { steps[num - 1], false };
	//step_info[num - 2] = { (steps[num - 2] + steps[num-1]), true };
	//step_info[num - 3] = { (steps[num - 3] + steps[num-1]), false };

	//for (int i = num - 4; i >= 0; i--) {

	//	if (step_info[i + 1].before) {  // before was 1
	//		max_v = step_info[i + 2].sum;
	//		flag = false;
	//	}
	//	else {
	//		if (step_info[i + 1].sum > step_info[i + 2].sum) {
	//			max_v = step_info[i + 1].sum;
	//			flag = true;
	//		}
	//		else {
	//			max_v = step_info[i + 2].sum;
	//			flag = false;
	//		}
	//	}
	//	step_info[i] = { (steps[i] + max_v), flag };

	//	cout << step_info[i + 1].sum << " " << step_info[i + 2].sum << " " << max_v << " " << step_info[i].sum << "\n";
	//}

	// Output
	//cout << step_info[0].sum << "\n";