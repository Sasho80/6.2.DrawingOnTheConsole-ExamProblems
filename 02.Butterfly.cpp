#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	int halfRowSize = n - 2;
	for (int i = 1; i <=halfRowSize; i++){
		if (i%2!=0){
			for (int j = 1; j <n-1; j++){
				cout <<'*';
			}
			cout << "\\ /";
			for (int  j= 1;  j <n-1;  j++){
				cout<<'*';
			}
			cout << endl;
		}
		else {
			for (int j = 1; j <n-1; j++) {
				cout <<'-';
			}
			cout << "\\ /";
			for (int j = 1; j <n-1; j++) {
				cout <<'-';
			}
			cout << endl;
		}
	}
	for (int k = 0;  k <n-1;  k++){
		cout << ' ';
	}
	cout << '@';
	cout << endl;
	for (int i = 1; i <= halfRowSize; i++) {
		if (i % 2 != 0) {
			for (int j = 1; j < n - 1; j++) {
				cout << '*';
			}
			cout << "/ \\";
			for (int j = 1; j < n - 1; j++) {
				cout << '*';
			}
			cout << endl;
		}
		else {
			for (int j = 1; j < n - 1; j++) {
				cout << '-';
			}
			cout << "/ \\";
			for (int j = 1; j < n - 1; j++) {
				cout << '-';
			}
			cout << endl;
		}
	}
	return 0;
}
