#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	string input;
	map<char, int> word_cnt = {};
	char cur, max_char;
	int max_num;
	bool same = false;

	cin >> input;

	for (int i = 0; i < input.size(); i++) {
		cur = toupper(input[i]);
		
		if (word_cnt.find(cur) == word_cnt.end()) {
			// Not Found
			word_cnt.insert(make_pair(cur, 1));
		}
		else {
			word_cnt[cur] += 1;
		}
	}


	max_char = word_cnt.begin()->first;
	max_num = word_cnt.begin()->second;

	for (auto it = word_cnt.begin(); it != word_cnt.end(); it++) {
		if (it == word_cnt.begin()) {
			continue;
		}
		if (it->second > max_num) {
			max_num = it->second;
			max_char = it->first;
			same = false;
		}
		else if (it->second == max_num) {
			same = true;
		}
	}
	if (same) {
		cout << "?" << "\n";
	}
	else {
		cout << max_char << "\n";
	}
	

}