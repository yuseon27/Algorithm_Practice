#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int div_end = 15746;
	int input = 0;
	long long * arr;

	cin >> input;
	arr = new long long[input+1];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;

	for (int i = 3; i <= input; i++) {
		arr[i] = (arr[i - 2] + arr[i - 1]) % div_end;
	}
	cout << arr[input] << "\n";

	delete arr;

	return 0;
}