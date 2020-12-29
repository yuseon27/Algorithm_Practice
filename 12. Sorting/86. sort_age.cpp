#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Info {
public:
	int age;
	string name;

	Info(int age, string name) :age(age), name(name) {}
};

bool compare(Info a, Info b) {
	if (a.age == b.age) {
		return false;
	}
	return a.age < b.age;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num, x;
	string y;
	vector<Info> vec;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> x >> y;
		vec.push_back(Info(x, y));
	}

	stable_sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < num; i++) {
		cout << vec[i].age << " " << vec[i].name << "\n";
	}

	return 0;
}