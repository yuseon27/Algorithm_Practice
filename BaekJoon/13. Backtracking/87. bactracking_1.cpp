#include <iostream>

using namespace std;

int n, m;
bool check[9] = { false, };
int arr[9] = { 0, };

void dfs(int cnt) {

	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (!check[i]) {
				check[i] = true;
				arr[cnt] = i;
				dfs(cnt + 1);
				check[i] = false;
			}
		}
	}
}


int main() {

	cin >> n >> m;

	dfs(0);

	return 0;
}