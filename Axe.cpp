#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int width = 5 * n;
	int leftDashes = 3 * n;
	int middleDashes = 0;
	int rightDashes = width - leftDashes - middleDashes - 2;
	//top part
	for (int i = 0; i < n; i++){
		for (int  j = 0; j < leftDashes; j++){
			cout << '-';
		}
		cout << '*';
		for (int j = 0; j < middleDashes; j++){
			cout << '-';
		}
		cout << '*';
		for (int j = 0; j < rightDashes; j++){
			cout << '-';
		}
		cout << endl;
		middleDashes++;
		rightDashes--;
	}
	//middle part
	 for (int i = 0; i<n / 2; i++) {
		for (int  j = 0; j < leftDashes+1; j++){
			cout << '*';
		}
		cout << '-';
		for (int j = 0; j < middleDashes-2; j++) {
			cout << '-';
		}
		cout << '*';
		for (int j = 0; j < rightDashes+1; j++){
			cout << '-';
		}
		cout << endl;
	}
	//down part
		 middleDashes--;
		 rightDashes++;
	 for (int i = 0; i <n / 2 - 1; i++) {
		for (int j = 0; j < leftDashes; j++) {
			cout << '-';
		}
		cout << '*';
		for (int j = 0; j <middleDashes; j++){
			cout << '-';
		}
		cout << '*';
		for (int j = 0; j < rightDashes; j++){
			cout << '-';
		}
		cout << endl;
		if (n % 2 == 0) {
			middleDashes += 2;
			leftDashes--;
			rightDashes--;
		}
	}
	// last row
	if (n%2==0){
    }
	 else {
		 middleDashes += 2;
		 leftDashes--;
		 rightDashes--;
	  } 
	for (int j = 0; j < leftDashes; j++) {
		cout << '-';
	}
	cout << '*';
	for (int j = 0; j < middleDashes; j++) {
		cout << '*';
	}
	cout << '*';
	for (int j = 0; j < rightDashes; j++) {
		cout << '-';
	}
	cout << endl; 
	return 0;
}