#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	int cnt = 0;
	bool b4_space = true;

	getline(cin, input);

	for (int i = 0; i < input.size(); i++) {
		if (input[i] == ' ' && !b4_space) {    // cnt space
			cnt++;
			b4_space = true;
		}
		else if (input[i] != ' ' && b4_space) {  
			// First is space or there is multiple space -> after check
			b4_space = false;
		}
	}
	cnt++;

	if (input[input.size() - 1] == ' ') {   // Last is space
		cnt--;
	}

	cout << cnt << "\n";

	return 0;
}