#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int colSize = n / 2;
	int midSize = 2 * n - 2 * colSize - 4;
	cout << '/';
	for (int i = 0; i < colSize; i++){
		cout << '^';
	}
	cout << '\\';
	for (int i = 0; i < midSize; i++) {
		cout << '_';
	}
	cout << '/';
	for (int i = 0; i < colSize; i++) {
		cout << '^';
	}
	cout << '\\'<<endl;
	for (int row = 0; row <= n - 3; row++) {
		cout << '|';
		if (row < n - 3) {
			for (int i = 0; i < 2 * n - 2; i++) {
				cout << ' ';
			}
		}
		else if(row==n-3){
			for (int i = 0; i < colSize + 1; i++) {
				cout << ' ';
			}
			for (int i = 0; i < midSize; i++) {
				cout << '_';
			}
			for (int i = 0; i < colSize + 1; i++) {
				cout << ' ';
			}
		}
		cout << '|'<<endl;
	}
	cout << '\\';
	for (int i = 0; i < colSize; i++) {
		cout << '_';
	}
	cout << '/';
	for (int i = 0; i < midSize; i++) {
		cout << ' ';
	}
	cout << '\\';
	for (int i = 0; i < colSize; i++) {
		cout << '_';
	}
	cout << '/' << endl;
	return 0;
}
