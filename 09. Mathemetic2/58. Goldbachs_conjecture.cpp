#include <iostream>
#define MAX_SIZE 10000

using namespace std;

int main() {
	int num_case, input;
	int arr[MAX_SIZE + 1] = {0, 1, 0, };

	for (int i = 2; i <= MAX_SIZE; i++) {
		if (arr[i] == 0) {
			for (int j = 2; i * j <= MAX_SIZE; j++) {
				arr[i * j] = 1;
			}
		}
	}

	cin >> num_case;

	for (int i = 0; i < num_case; i++) {
		cin >> input;

		for (int j = input / 2; j > 0; j--) {
			if (arr[j] == 0 && arr[input - j] == 0) {
				cout << j << " " << input - j << "\n";
				break;
			}

		}

	}

	return 0;
}




//int* save_prime(int end) {
//	int* arr = new int[end + 1];
//	int cnt = 0;
//
//	for (int i = 2; i <= end; i++) {
//		arr[i] = i;
//	}
//
//	for (int i = 2; i <= end; i++) {
//		if (arr[i] == 0) {
//			continue;
//		}
//
//		for (int j = i + i; j <= end; j += i) {
//			arr[j] = 0;
//		}
//	}
//
//	return arr;
//}
//
//int main() {
//	int num_case, input, num1, num2;
//	int* arr = new int[10001];
//	arr = save_prime(10000);
//
//	cin >> num_case;
//
//	for (int i = 0; i < num_case; i++) {
//		cin >> input;
//
//		for (int n = input / 2; n > 0; n--) {
//			if (arr[n] != 0 && arr[input - n] != 0) {
//				cout << n << " " << input - n << "\n";
//				break;
//			}
//		}
//
//	}
//	delete[] arr;
//
//	return 0;
//}