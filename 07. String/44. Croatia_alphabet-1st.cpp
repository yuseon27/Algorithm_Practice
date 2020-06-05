// Need to solve one more time
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<string>vec = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	int cnt = 0, idx = 0;
	string input;
	cin >> input;

	for (int i = 0; i < vec.size(); i++) {
		idx = input.find(vec[i]);

		for (; idx != string::npos; idx = input.find(vec[i])) {
			input.replace(idx, vec[i].length(), "#");
		}
	}

	cout << input.length();

	return 0;
}