#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a = 0;

	cin >> a;

	for (int i = a; i > 0; i--) {
		cout << i << '\n';
	}

	return 0;
}