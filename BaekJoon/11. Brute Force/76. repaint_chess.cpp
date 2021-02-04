#include <iostream>
#define MAX 50

using namespace std;

bool CHESS[MAX][MAX];

int cnt_color_change(int row, int col, bool prev_check) {
	// parameter prev_check is opposite of (0,0) value
	int cnt = 0;

	for (int r = row; r < row + 8; r++) {
		for (int c = col; c < col + 8; c++) {
			if (CHESS[r][c] == prev_check) {
				cnt++;
			}
			prev_check = !prev_check;
		}
		prev_check = !prev_check;
	}
	return cnt;
}

int main() {

	int row, col;
	char chess_input;
	int min_cnt = 64, cnt = 0;
	bool prev_check;

	// Input
	cin >> row >> col;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> chess_input;

			if (chess_input == 'W') {
				CHESS[i][j] = true;
			}
			else if (chess_input == 'B') {
				CHESS[i][j] = false;
			}
		}
	}

	// Check Paint
	for (int i = 0; i < row - 7; i++) {
		for (int j = 0; j < col - 7; j++) {

			cnt = cnt_color_change(i, j, true);
			if (cnt < min_cnt) {
				min_cnt = cnt;
			}

			cnt = cnt_color_change(i, j, false);
			if (cnt < min_cnt) {
				min_cnt = cnt;
			}
		}
	}

	cout << min_cnt << "\n";

	return 0;
}