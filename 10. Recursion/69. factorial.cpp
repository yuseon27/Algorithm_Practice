#include <iostream>

using namespace std;

int fact(int num) {
	if (num == 0 || num == 1) {
		return 1;
	}
	return num * fact(num - 1);
}

int main() {
	int input, result;

	cin >> input;

	result = fact(input);
	cout << result << "\n";

	return 0;
}