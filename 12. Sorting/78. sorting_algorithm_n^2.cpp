#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector<int> &v) {
	int tmp;
	for (int i = 0; i < v.size() - 1; i++) {
		for (int j = i + 1; j < v.size(); j++) {
			if (v[i] > v[j]) {
				tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}	
		}
	}
}

void selection_sort(vector<int> &v) {
	int tmp;

	for (int i = 0; i < v.size() - 1; i++) {
		tmp = i;
		for (int j = i; j < v.size(); j++) {
			if (v[j] < v[tmp]) {
				tmp = j;
			}
		}
		swap(v[i], v[tmp]);
	}

}

void insertion_sort(vector<int> &v) {
	int tmp, j;

	for (int i = 1; i < v.size(); i++) {
		tmp = v[i];
		j = i - 1;
		while (j > 0 && tmp < v[j]) {
			swap(v[j], v[j + 1]);
			j--;
		}
		v[j + 1] = tmp;
	}
}

int main() {
	int num, tmp;
	vector <int> num_vector;
	

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> tmp;
		num_vector.push_back(tmp);
	}

	// bubble_sort(num_vector);
	// selection_sort(num_vector);
	insertion_sort(num_vector);

	for (int i = 0; i < num_vector.size(); i++) {
		cout << num_vector[i] << "\n";
	}

	return 0;
}