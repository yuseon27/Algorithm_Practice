#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() < b.length();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	string w;
	vector<string> word_vec;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> w;

		word_vec.push_back(w);
	}
	sort(word_vec.begin(), word_vec.end(), compare);
	word_vec.erase(unique(word_vec.begin(), word_vec.end()), word_vec.end());

	for (int i = 0; i < word_vec.size(); i++) {
		cout << word_vec[i] << "\n";
	}

	return 0;
}