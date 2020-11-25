#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double r, taxi, ucl;

	cin >> r;
	taxi = M_PI * r * r;
	ucl = r * r * 2;

	printf("%.6f\n", taxi);
	printf("%.6f\n", ucl);

	return 0;
}