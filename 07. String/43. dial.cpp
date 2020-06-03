#include <iostream>
#include <string>

using namespace std;

int main() {

	string message, mes_int, temp;
	int time = 0, num = 0;

	cin >> message;

	for (int i = 0; i < message.size(); i++) {
		temp = message[i];

		if (temp >= "A" && temp <= "C") {
			mes_int += "2";
		}
		else if (temp >= "D" && temp <= "F") {
			mes_int += "3";
		}
		else if (temp >= "G" && temp <= "I") {
			mes_int += "4";
		}
		else if (temp >= "J" && temp <= "L") {
			mes_int += "5";
		}
		else if (temp >= "M" && temp <= "O") {
			mes_int += "6";
		}
		else if (temp >= "P" && temp <= "S") {
			mes_int += "7";
		}
		else if (temp >= "T" && temp <= "V") {
			mes_int += "8";
		}
		else if (temp >= "W" && temp <= "Z") {
			mes_int += "9";
		}

	}

	for (int i = 0; i < mes_int.size(); i++) {
		num = int(mes_int[i]) - 48;

		time += num + 1;
	}
	cout << time << "\n";

	return 0;
}