#include <iostream>

using namespace std;

int n, m;
bool check[8] = { false, };
int arr[8] = { 0, };

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
			arr[cnt] = i;
			dfs(cnt + 1);
		}
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	dfs(0);

	return 0;
}