#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long a, b, c;
		cin >> a >> b >> c;
		string flag = a > c - b? "true" : "false";
		cout << "Case #" << i + 1 << ": " << flag << endl;
	}
	return 0;
}
