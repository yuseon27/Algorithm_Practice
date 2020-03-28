#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num = 0, a = 0, b = 0;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> a >> b;
		cout << a + b << '\n';
	}
	return 0;
}