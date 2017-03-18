#include <iostream>
#include <string>

using namespace std;

int main() {
	string raw_ISBN;
	cin >> raw_ISBN;
	int count = 1;
	int index = 0;
	int cal = 0;
	while(count < 10) {
		if (raw_ISBN[index] == '-') {
			index++;
			continue;
		}
		cal += (raw_ISBN[index++] - '0') * count++;
	}
	if (cal % 11 == 10 && raw_ISBN[raw_ISBN.size() - 1] == 'X')
		cout << "Right\n";
	else if (cal % 11 == raw_ISBN[raw_ISBN.size() - 1] - '0')
		cout << "Right\n";
	else {
		if (cal % 11 == 10) {
			raw_ISBN[raw_ISBN.size() - 1] = 'X';
		}else {
			raw_ISBN[raw_ISBN.size() - 1] = (cal % 11) + '0';
		}
		cout << raw_ISBN << endl;
	}
	return 0;
}