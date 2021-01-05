#include <iostream>
#define MAX 91
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int input = 0;
	long long fib[MAX] = { 0, 1};

	cin >> input;

	for (int i = 2; i <= input; i++) {
		fib[i] = fib[i - 2] + fib[i - 1];
	}
	cout << fib[input] << "\n";

	return 0;
}