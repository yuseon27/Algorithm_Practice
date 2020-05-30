#include <iostream>
#include <string>

using namespace std;

int main() {
	int test_case = 0, rep = 0;
	string input;
	string *s;

	cin >> test_case;
	s = new string[test_case];

	for (int i = 0; i < test_case; i++) {
		cin >> rep;
		cin >> input;

		for (int j = 0; j < input.size(); j++) {
			for (int k = 0; k < rep; k++) {
				s[i] += input[j];
			}
		}
	}

	for (int i = 0; i < test_case; i++) {
		cout << s[i] << '\n';
	}

	delete[] s;

	return 0;
}