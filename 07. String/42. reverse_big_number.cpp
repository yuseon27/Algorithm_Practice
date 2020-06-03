#include <iostream>
#include <string>

using namespace std;

int main() {
	string a, b;
	string a_rev, b_rev;
	int a_num, b_num;

	cin >> a;
	cin >> b;

	for (int i = a.size()-1; i >= 0; i--) {
		a_rev += a[i];
		b_rev += b[i];
	}
	
	a_num = stoi(a_rev);
	b_num = stoi(b_rev);

	if (a_num >= b_num) {
		cout << a_num << "\n";
	}
	else {
		cout << b_num << "\n";
	}

	return 0;
}