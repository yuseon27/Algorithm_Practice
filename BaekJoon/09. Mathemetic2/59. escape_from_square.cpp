#include <iostream>

using namespace std;

int main() {
	int x, y, w, h;
	int diff_wr, diff_hr;
	int min_w, min_h;

	cin >> x >> y >> w >> h;

	diff_wr = w - x;
	diff_hr = h - y;
	
	if (x < diff_wr) {
		min_w = x;
	}
	else {
		min_w = diff_wr;
	}
	
	if (y < diff_hr) {
		min_h = y;
	}
	else {
		min_h = diff_hr;
	}

	if (min_w < min_h) {
		cout << min_w << "\n";
	}
	else {
		cout << min_h << "\n";
	}

	return 0;
}