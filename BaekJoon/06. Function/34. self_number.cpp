#include <iostream>
#include <vector>

using namespace std;

static int LIMIT (10000);
bool included[10001] = { false };

void create_self_num(int num) {
	int new_num = num;

	if (num > LIMIT) {
		return;
	}

	if (!included[num]) {
		included[num] = true;

		while (num != 0) {
			new_num += num % 10;
			num /= 10;
		}
		create_self_num(new_num);
	}
	return;

}

int main() {

	included[0] = true;

	for (int i = 1; i < LIMIT + 1; i++) {
		if (!included[i]) {
			cout << i << "\n";
			create_self_num(i);
		}
	}

	return 0;
}