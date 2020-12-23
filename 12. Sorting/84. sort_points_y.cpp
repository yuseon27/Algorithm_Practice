#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Point {
public:
	int x;
	int y;

	Point(int x, int y) :x(x), y(y) {}
};

bool compare(Point a, Point b) {
	if (a.y == b.y) {
		return a.x < b.x;
	}
	return a.y < b.y;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num, x, y;
	vector<Point> vec;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> x >> y;
		vec.push_back(Point(x, y));
	}

	sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < num; i++) {
		cout << vec[i].x << " " << vec[i].y << "\n";
	}

	return 0;
}