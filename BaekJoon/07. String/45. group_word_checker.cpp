#include <iostream>
#include <map>

using namespace std;

int main() {
	int input_num, output_num = 0;
	string input, cur, unq_char;
	string unq_str;
	bool exist = false, wrong = false;

	cin >> input_num;
	for (int i = 0; i < input_num; i++) {
		cin >> input;

		for (int j = 0; j < input.size(); j++) {   // one char in word
			cur = input[j];
			for (int k = 0; k < unq_str.size(); k++) {  // one char in set
				unq_char = unq_str[k];
				cout << unq_char << " " << cur << " " << k << endl;
				if (unq_char == cur) {
					if (k == unq_str.size() - 1) {
						cout << cur << " is the last char" << endl;
						exist = true;
					}
					else {
						cout << cur << " makes it wrong ";
						wrong = true;
						break;
					}
				}
			}

			if (wrong) {
				cout << ">> ";
				break;
			}
			if (!exist) {
				unq_str += cur;
				cout << cur << " is added to unq_str : " << unq_str << endl;
			}
			else {
				cout << cur << " is the last character" << endl;
				exist = false;
			}
		}
		if (!wrong) {
			output_num++;
			cout << input << " is added : " << output_num << endl;
		}
		else {
			cout << input << " is wrong!!" << endl;
		}
		exist = false;
		wrong = false;
		unq_str = "";
	}

	cout << output_num;

	return 0;
}