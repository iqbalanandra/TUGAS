#include <iostream>
using namespace std;
int main(){
	int a, n, i;
	cin>>a; cin>>n;
	if(a>n || a<0 ||a>1000 || n<0 || n>1000){
		cout<<"Input Salah";
		return 0;
	}
	for(i=a;i<=n;i++){
		if (i==0){		
			cout<<"0 ";
	}	else if (i%15==0){
		cout<<"Lima Belas ";
	}	else if (i%18==0){
		cout<<"Delapan Belas ";
		}else{
			cout<<i<<" ";
	}
	
}
}
