#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int num, tmp;
	vector<int> num_v;

	cin >> num;

	while (num > 0) {
		tmp = num % 10;
		num /= 10;
		num_v.push_back(tmp);
	}

	sort(num_v.begin(), num_v.end(), greater<int>());

	for (int i = 0; i < num_v.size(); i++) {
		cout << num_v[i];
	}

	return 0;
}