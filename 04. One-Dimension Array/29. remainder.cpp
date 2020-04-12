# include <iostream>

using namespace std;

int main() {
	int const ten = 10;
	int const div = 42;

	int num = 0, cnt = 0;
	int remainder[ten] = { -1 };
	
	for (int i = 0; i < ten; i++) {
		cin >> num;
		remainder[i] = num % div;

		for (int j = 0; j < i; j++) {
			if (remainder[i] == remainder[j]) {
				cnt += 1;
				break;
			}
		}
	}
	cout << ten - cnt << "\n";

	return 0;
}