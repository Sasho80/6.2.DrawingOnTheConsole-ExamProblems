#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int outerDots = (n - 1) / 2;
	int innerDots = n - 2;
	//top part
	for (int i = 0; i < outerDots; i++) {
		cout << '.';
	}
	for (int i = 0; i < n; i++) {
		cout << '#';
	}
	for (int i = 0; i < outerDots; i++) {
		cout << '.';
	}
	cout << endl;
	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < outerDots; j++) {
			cout << '.';
		}
		cout << '#';
		for (int j = 0; j < innerDots; j++) {
			cout << '.';
		}
		cout << '#';
		for (int j = 0; j < outerDots; j++) {
			cout << '.';
		}
		cout << endl;
	}
	//middle part
	for (int i = 0; i < outerDots + 1; i++) {
		cout << '#';
	}
	for (int i = 0; i < innerDots; i++) {
		cout << '.';
	}
	for (int i = 0; i < outerDots + 1; i++) {
		cout << '#';
	}
	cout << endl;
	//down part
	innerDots = 2 * n - 5;
	outerDots = 1;
	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < outerDots; j++) {
			cout << '.';
		}
		cout << '#';
		for (int j = 0; j < innerDots; j++) {
			cout << '.';
		}
		cout << '#';
		for (int j = 0; j < outerDots; j++) {
			cout << '.';
		}
		cout << endl;
		outerDots++;
		innerDots -= 2;
	}
	for (int i = 0; i < outerDots; i++){
		cout << '.';
	}
	cout << '#';
	for (int i = 0; i < outerDots; i++) {
		cout << '.';
	}
	cout << endl;
}