#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int dots = n + 1;
	// up part
	int underscopes = 2 * n + 1;
	for (int i = 0; i < dots; i++) {
		cout << ".";
	}
	for (int i = 0; i < underscopes; i++) {
		cout << "_";
	}
	for (int i = 0; i < dots; i++) {
		cout << ".";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < dots-1; j++) {
			cout << ".";
		}
		cout << "//";
	for (int j = 0; j < underscopes-2; j++) {
		cout << "_";
	}
	cout << "\\\\";
	for (int j = 0; j < dots-1; j++) {
		cout << ".";
	}
	cout << endl;
	underscopes += 2;
	dots--;
    }
	cout << "//";
	// middle part
	for (int i = 1; i < (underscopes-5)/2; i++){
		cout << '_';
	}
	cout << "STOP!";
	for (int i = 1; i < (underscopes - 5)/ 2; i++) {
		cout << '_';
	}
	cout << "\\\\" << endl;
	//down part
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i; j++){
			cout << '.';
		}
		cout << "\\\\";
		for (int j = 0; j < underscopes-2; j++){
			cout << '_';
		}
		cout << "//";
		for (int j = 0; j < i; j++){
			cout << '.';
		}
		cout << endl;
		underscopes -= 2;
	}
	return 0;
}