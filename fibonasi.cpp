#include <iostream>
using namespace std;


int main() {
	int a1 = 0;
	int a2 = 1;
	int n;
	int temp = 0;	
	cin >> n;	
	
	
	cout << a1 << " ";
	cout << a2 << " ";
	
	for (int i = 3; i <= n; i++){
		temp = a1 + a2;
		cout << temp << " ";
		a1 = a2;
		a2 = temp;
	}
    return 0;
}
