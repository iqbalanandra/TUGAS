#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin>>a; cin>>b;
    if (a<1 || a>100 || a<1 || b>100){
		cout<<"INPUTAN SALAH"<<endl;
		return 0;
	}
    if (a != b){
    	cout<<a<<" != "<<b<<endl;
	}if (a == b){
		cout<<a<<" == "<<b<<endl;
	}if (a < b){
		cout<<a<<" < "<<b<<endl;
	}if (a > b){
		cout<<a<<" > "<<b<<endl;
	}if ( a <= b){
		cout<<a<<" <= "<<b<<endl;
	}if (a >= b){
		cout<<a<<" >= "<<b<<endl;
	}

    return 0;
}

