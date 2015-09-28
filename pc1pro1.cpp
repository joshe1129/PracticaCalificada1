#include <iostream>
using namespace std;
int main() {
	int arr[8];
	cout <<"Please enter 8 integers:" << endl;
	for(int i = 0; i < 8; i++){
		cin >> arr[i];
	}
	cout <<"Values in array are now: ";
	for(int i = 7; i >= 0; i--){
		cout << " " <<arr[i];
	}
	cout << endl;
	return 0;
}
