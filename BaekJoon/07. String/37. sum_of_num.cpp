#include <iostream>
#include <string>

using namespace std;

int main() {
	int length = 0, sum = 0;
	string input;

	cin >> length;
	cin >> input;

	for (int i = 0; i < input.size(); i++) {
		sum += int(input[i]) - 48;
	}

	cout << sum << endl;
	return 0;
}