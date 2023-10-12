#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n >= 0) {
		cout << n;
		return 0;
	}

	int root = n / 100;
	int tens = (-n / 10) % 10;
	int u = (-n) % 10;

	cout << root * 10 - min(tens, u);
}
