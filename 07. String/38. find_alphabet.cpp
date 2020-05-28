#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	int alpha[26];
	fill_n(alpha, 26, -1);
	int ascii = 0;

	cin >> input;

	for (int i = 0; i < input.size(); i++) {
		ascii = int(input.at(i)) - 97;

		if (alpha[ascii] == -1) {
			alpha[ascii] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << " ";
	}

	return 0;
}