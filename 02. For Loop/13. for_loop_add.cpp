#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int num = 0, a=0, b=0;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> a >> b;
		cout << a + b << endl;
	}

	return 0;
}