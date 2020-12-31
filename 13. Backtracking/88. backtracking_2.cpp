#include <iostream>

using namespace std;

int n, m;
int arr[9] = {0, };
bool check[9] = {false, };

void dfs(int cnt) {

	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (!check[i]) {
				for (int j = 1; j <= i; j++)
					check[j] = true;
				arr[cnt] = i;
				dfs(cnt + 1);

				for (int j = 1; j <= i; j++)
					check[j] = false;
			}
		}
	}
}


int main() {
	
	cin >> n >> m;

	dfs(0);

	return 0;
}