#include <iostream>
using namespace std;
int main(){
	int n, i, j, k;
	cin>>n;
	for(i=n ; i>0 ; i--){
		for(j=n ; j>i ; j--){
			cout<<"  ";
		}for(k=n ; k>n-j ; k--){
			cout<<k<<" ";
		}cout<<endl;
	}
	
}
