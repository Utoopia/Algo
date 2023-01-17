#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	getline(cin, input);

	for (int i = 0; i < input.length(); i++) {
		int a = input[i];

		if (a >= 65 && a <= 77) {
			a = a + 13;
			input[i] = (char)a;
		}

		else if (a >= 78 && a <= 90) {
			a = a - 13;
			input[i] = (char)a;
		}

		else if (a >= 97 && a <= 109) {
			a = a + 13;
			input[i] = (char)a;
		}

		else if (a >= 110 && a <= 122) {
			a = a - 13;
			input[i] = (char)a;
		}

		cout << input[i];
	}

}